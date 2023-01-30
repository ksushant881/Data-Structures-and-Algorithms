import org.jsoup.Jsoup;
import org.jsoup.nodes.Document;
import org.jsoup.nodes.Element;
import org.jsoup.select.Elements;

import java.io.IOException;
import java.util.ArrayList;
import java.util.Arrays;

import java.time.LocalDateTime;


public class test {
    public static void main(String[] args) {
        ArrayList<String> tickerList = new ArrayList<>();
        ArrayList<String> companyList = new ArrayList<>();
        ArrayList<String> premarketHighsList = new ArrayList<>();
        ArrayList<String> currentPriceList = new ArrayList<>();


        final String tradingViewURL=
                "https://www.tradingview.com/markets/stocks-usa/market-movers-pre-market-gainers/";
        final String cnbcURL=
                "https://www.cnbc.com/quotes/";


        int count = 0;
        count--;

        try {
            final Document tradingView = Jsoup.connect(tradingViewURL).get();


            for (Element row: tradingView.select("table.table-DR3mi0GH tr")) { //Screener table
                count++;
                Elements td = row.select("td.cell-TKkxf89L.left-TKkxf89L.cell-fixed-f5et_Mwd.onscroll-shadow");

                //Ticker
                if (td.select("sup.apply-common-tooltip.tickerDescription-hMpTPJiS").text().equals("")){
                    System.out.println("Empty row");
                } else {
                    String ticker = td.select("a.apply-common-tooltip.tickerNameBox-hMpTPJiS.tickerName-hMpTPJiS").text();
                    System.out.println(ticker);
                    tickerList.add(ticker);
                }


                //Company name
                if (td.select("sup.apply-common-tooltip.tickerDescription-hMpTPJiS").text().equals("")){
                    System.out.println("Empty row");
                } else {
                    String company = td.select("sup.apply-common-tooltip.tickerDescription-hMpTPJiS").text();
                    System.out.println(company);
                    companyList.add(company);
                }

            }

        } catch(Exception ex) {
            ex.printStackTrace();
        }

        System.out.println(tickerList);
        System.out.println(companyList);


        //Premarket Highs List
        try {


            for (int i=0; i<count; i++){
                Document cnbc = Jsoup.connect(cnbcURL + tickerList.get(i)).get();
                Elements premarketPriceList = cnbc.select("ul.Summary-data.Summary-stock");
                Elements premarketPriceItem = premarketPriceList.select("li.Summary-stat:nth-of-type(2)");
                Elements premarketPriceText = premarketPriceItem.select("span.Summary-value");

                Elements currentPriceDiv = cnbc.select("QuoteStrip-lastPriceStripContainer");
                Elements currentPriceText = currentPriceDiv.select("QuoteStrip-lastPrice");


                premarketHighsList.add(premarketPriceText.text());
                currentPriceList.add(currentPriceText.text());

            }



        } catch(Exception ex) {
            ex.printStackTrace();
        }





        System.out.println(premarketHighsList);
        System.out.println(currentPriceList);



    }
}