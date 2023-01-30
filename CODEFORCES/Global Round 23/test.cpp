%-------------------------
% Resume in Latex
% Author : Sourabh Bajaj
% Website: https://github.com/sb2nov/resume
% License : MIT
%------------------------

\documentclass[letterpaper,11pt]{article}

\usepackage{latexsym}
\usepackage[empty]{fullpage}
\usepackage{titlesec}
\usepackage{marvosym}
\usepackage[usenames,dvipsnames]{color}
\usepackage{verbatim}
\usepackage{enumitem}
\usepackage[pdftex]{hyperref}
\usepackage{fancyhdr}


\pagestyle{fancy}
\fancyhf{} % clear all header and footer fields
\fancyfoot{}
\renewcommand{\headrulewidth}{0pt}
\renewcommand{\footrulewidth}{0pt}

% Adjust margins
\addtolength{\oddsidemargin}{-0.375in}
\addtolength{\evensidemargin}{-0.375in}
\addtolength{\textwidth}{1in}
\addtolength{\topmargin}{-.5in}
\addtolength{\textheight}{1.0in}

\urlstyle{same}

\raggedbottom
\raggedright
\setlength{\tabcolsep}{0in}

% Sections formatting
\titleformat{\section}{
  \vspace{-4pt}\scshape\raggedright\large
}{}{0em}{}[\color{black}\titlerule \vspace{-5pt}]

%-------------------------
% Custom commands
\newcommand{\resumeItem}[2]{
  \item\small{
    \textbf{#1}{: #2 \vspace{-2pt}}
  }
}

\newcommand{\resumeSubheading}[4]{
  \vspace{-1pt}\item
    \begin{tabular*}{0.97\textwidth}{l@{\extracolsep{\fill}}r}
      \textbf{#1} & #2 \\
      \textit{\small#3} & \textit{\small #4} \\
    \end{tabular*}\vspace{-5pt}
}

\newcommand{\resumeSubItem}[2]{\resumeItem{#1}{#2}\vspace{-4pt}}

\renewcommand{\labelitemii}{$\circ$}

\newcommand{\resumeSubHeadingListStart}{\begin{itemize}[leftmargin=*]}
\newcommand{\resumeSubHeadingListEnd}{\end{itemize}}
\newcommand{\resumeItemListStart}{\begin{itemize}}
\newcommand{\resumeItemListEnd}{\end{itemize}\vspace{-5pt}}

%-------------------------------------------
%%%%%%  CV STARTS HERE  %%%%%%%%%%%%%%%%%%%%%%%%%%%%


\begin{document}

%----------HEADING-----------------
\begin{tabular*}{\textwidth}{l@{\extracolsep{\fill}}r}
  \textbf{\href{http://sourabhbajaj.com/}{\Large Sushant}} & Email : \href{mailto:sourabh@sourabhbajaj.com}{ksushant881@gmail.com}\\
  \href{http://sourabhbajaj.com/}{http://www.sourabhbajaj.com} & Mobile : +91-9910725249 \\
\end{tabular*}


%-----------EDUCATION-----------------
\section{Education}
  \resumeSubHeadingListStart
    % \resumeSubheading
    %   {Georgia Institute of Technology}{Atlanta, GA}
    %   {Master of Science in Computer Science;  GPA: 4.00}{Aug. 2012 -- Dec. 2013}
    \resumeSubheading
      {National Institute of Technology Sikkim}{Sikkim, India}
      {Bachelor of Engineering in Electronics and Communication;  CGPA: 8.62 }{Aug. 2018 -- June. 2022}
  \resumeSubHeadingListEnd


%-----------EXPERIENCE-----------------
\section{Experience}
  \resumeSubHeadingListStart

    \resumeSubheading
      {Enfusion}{Bangalore, India}
      {Software Engineer}{July 2022 - Present}
      \resumeItemListStart
        \resumeItem{Tensorflow}
          {TensorFlow is an open source software library for numerical computation using data flow graphs; primarily used for training deep learning models.}
        \resumeItem{Apache Beam}
          {Apache Beam is a unified model for defining both batch and streaming data-parallel processing pipelines, as well as a set of language-specific SDKs for constructing pipelines and runners.}
      \resumeItemListEnd

    \resumeSubheading
      {Enfusion}{Bangalore, India}
      {Software Engineer Intern}{Jan 2022 - June 2022}
      \resumeItemListStart
        \resumeItem{Notifications}
          {Service for sending email, push and in-app notifications. Involved in features such as delivery time optimization, tracking, queuing and A/B testing. Built an internal app to run batch campaigns for marketing etc.}
        \resumeItem{Nostos}
          {Bulk data processing and injection service from Hadoop to Cassandra and provides a thin REST layer on top for serving offline computed data online.}
        \resumeItem{Workflows}
          {Dataduct an open source workflow framework to create and manage data pipelines leveraging reusables patterns to expedite developer productivity.}
        \resumeItem{Data Collection}
          {Designed the internal survey and crowd sourcing platfowm which allowed for creating various tasks for crowd sourding or embedding surveys across the Coursera platform.}
        \resumeItem{Dev Environment}
          {Analytics environment based on docker and AWS, standardized the python and R dependencies. Wrote the core libraries that are shared by all data scientists.}
        \resumeItem{Data Warehousing}
          {Setup, schema design and management of Amazon Redshift. Built an internal app for access to the data using a web interface. Dataduct integration for daily ETL injection into Redshift.}
        \resumeItem{Recommendations}
          {Core service for all recommendation systems at Coursesa, currently used on the homepage and throughout the content discovery process. Worked on both offline training and online serving.}
        \resumeItem{Content Discovery}
          {Improved content discovery by building a new onboarding experience on coursera. Using this to personalize the search and browse experience. Also worked on ranking and indexing improvements.}
        \resumeItem{Course Dashboards}
          {Instructor dashboards and learner surveying tools, which helped instructors run their class better by providing data on Assignments and Learner Activity.}
      \resumeItemListEnd

    \resumeSubheading
      {Irasus Technologies}{Remote}
      {Software Engineer Intern}{Summer 2021}
      \resumeItemListStart
        \resumeItem{Portfolio Management}
          {Created models for portfolio hedging,  portfolio optimization and price forecasting. Also creating a strategy backtesting engine used for simulating and backtesting strategies.}
        \resumeItem{QuantDesk}
          {Python backend for a web application used by hedge fund managers for portfolio management.}
      \resumeItemListEnd

  \resumeSubHeadingListEnd


%-----------PROJECTS-----------------
\section{Projects}
  \resumeSubHeadingListStart
    \resumeSubItem{QuantSoftware Toolkit}
      {Open source python library for financial data analysis and machine learning for finance.}
    \resumeSubItem{Github Visualization}
      {Data Visualization of Git Log data using D3 to analyze project trends over time.}
    \resumeSubItem{Recommendation System}
      {Music and Movie recommender systems using collaborative filtering on public datasets.}
%     \resumeSubItem{Mac Setup}
%       {Book that gives step by step instructions on setting up developer environment on Mac OS.}
  \resumeSubHeadingListEnd

%
%--------PROGRAMMING SKILLS------------
\section{Programming Skills}
 \resumeSubHeadingListStart
   \item{
     \textbf{Languages}{: C++, Java, Javascript, Groovy, SQL, }
     \hfill
     \textbf{Technologies}{: AWS,, React, Kafka}
   }
 \resumeSubHeadingListEnd


%-------------------------------------------
\end{document}
