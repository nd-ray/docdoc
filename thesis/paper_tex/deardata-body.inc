
% ---------------------------------------------------------------------
% EG author guidelines plus sample file for EG publication using LaTeX2e input
    % D.Fellner, v2.02, Jan 25, 2017


\title[EG Education]%
      {Integrating Visualization Literacy into Computer Graphics Education Using the
Example of Dear Data}

%\title[EG Visualization]%
      %{Adding Creativity and Divergent Thinking into Visualization Education Using the
%Example of Dear Data}

% for anonymous conference submission please enter your SUBMISSION ID
% instead of the author's name (and leave the affiliation blank) !!
% for final version: please provide your *own* ORCID in the brackets following \orcid; see https://orcid.org/ for more details.

\author[A. Krekhov, M. Michalski, and Jens Kr\"uger]
{\parbox{\textwidth}{\centering A. Krekhov$^{1}$, M. Michalski$^{1}$, and J. Kr\"uger$^{1}$
%        S. Spencer$^2$\thanks{Chairman Siggraph Publications Board}
        }
        \\
% For Computer Graphics Forum: Please use the abbreviation of your first name.
{\parbox{\textwidth}{\centering $^1$Center for Visual Data Analysis and Computer Graphics (COVIDAG), University of Duisburg-Essen, Germany
%        $^2$ Another Department to illustrate the use in papers from authors
%             with different affiliations
       }
}
}


%\author[Submission ID 1234]
%{\parbox{\textwidth}{\centering Submission ID: \textbf{edu1005}} 
%        S. Spencer$^2$\thanks{Chairman Siggraph Publications Board}
%        }
%        \\
% For Computer Graphics Forum: Please use the abbreviation of your first name.
% {\parbox{\textwidth}{\centering $^1$TU Darmstadt \& Fraunhofer IGD, Germany\\
%          $^2$Graz University of Technology, Institute of Computer Graphics and Knowledge Visualization, Austria
% %        $^2$ Another Department to illustrate the use in papers from authors
% %             with different affiliations
%        }
% }
%}
% ------------------------------------------------------------------------

% if the Editors-in-Chief have given you the data, you may uncomment
% the following five lines and insert it here
%
% \volume{36}   % the volume in which the issue will be published;
% \issue{1}     % the issue number of the publication
% \pStartPage{1}      % set starting page


%-------------------------------------------------------------------------
\begin{document}

% uncomment for using teaser
% \teaser{
%  \includegraphics[width=\linewidth]{eg_new}
%  \centering
%   \caption{New EG Logo}
% \label{fig:teaser}
%}

\teaser{
  \centering
  \includegraphics[width=\linewidth]{figures/teaser}
  \caption{Results on the topic ``water'' showcase participants' divergent thinking approaches: day-by-day visualizations vs. aggregations, digital vs. analog, amount of tracked attributes, visual clutter, and differing topic interpretations.}
  \label{fig:teaser}
}

\maketitle
%-------------------------------------------------------------------------
\begin{abstract}
The amount of visual communication we are facing is rapidly increasing, and skills to process, understand, and generate visual representations are in high demand. Especially students focusing on computer graphics and visualization can benefit from a more diverse education on visual literacy, as they often have to work on graphical representations for broad masses after their graduation. Our proposed teaching approach incorporates basic design thinking principles into traditional visualization and graphics education. Our course was inspired by the book \textit{Dear Data} that was the subject of a lively discussion at the closing capstone of IEEE VIS 2017. The paper outlines our 12-week teaching experiment and summarizes the results extracted from accompanying questionnaires and interviews. In particular, we provide insights into the creation process and pain points of visualization novices, discuss the observed interplay between visualization tasks and design thinking, and finally draw design implications for visual literacy education in general.
%Example:
\begin{CCSXML}
<ccs2012>
<concept>
<concept_id>10003120.10003145.10003147</concept_id>
<concept_desc>Human-centered computing~Visualization application domains</concept_desc>
<concept_significance>500</concept_significance>
</concept>
<concept>
<concept_id>10003120.10003145.10003147.10010923</concept_id>
<concept_desc>Human-centered computing~Information visualization</concept_desc>
<concept_significance>300</concept_significance>
</concept>
<concept>
<concept_id>10003120.10003145.10011770</concept_id>
<concept_desc>Human-centered computing~Visualization design and evaluation methods</concept_desc>
<concept_significance>300</concept_significance>
</concept>
<concept>
<concept_id>10003456.10003457.10003527.10003531</concept_id>
<concept_desc>Social and professional topics~Computing education programs</concept_desc>
<concept_significance>300</concept_significance>
</concept>
</ccs2012>
\end{CCSXML}

\ccsdesc[500]{Human-centered computing~Visualization application domains}
\ccsdesc[300]{Human-centered computing~Information visualization}
\ccsdesc[300]{Human-centered computing~Visualization design and evaluation methods}
\ccsdesc[300]{Social and professional topics~Computing education programs}

\printccsdesc   
\end{abstract}  
%-------------------------------------------------------------------------




\section{Introduction}



%wichtigkeit fuer accept: sehr wichtig, iteration / verfeinerung notwendig.
%
%Infographics und ansprechende visualisierungen sind wichtig. Dear data war capstone auf der vis, interesse ist also da.
%
%Unsere hauptfrage: wie lerne ich kreativ zu visualisieren und tunnelblick vermeiden? Geht das minimalinvasiv, ohne eine designerausbildung? Kann man das in vis teaching integrieren?
%
%Design thinking: pipeline fuer andere domains, man muss also kein designer werden.
%
%An der stelle kommen design elemente rein, die man als vis experte erstmal nicht ernst nimmt. kann man vielleicht handgriffe aus dem design apparat (v.a. design thinking) uebernehmen und integrieren?
%
%evtl design thinking als eigene subsection hier oder ggf sogar spaeter?
%
%
%High-level goal: why. Diskussion, warum design thinking staerker in der visualisierungsausbildung praesent sein sollte.
%
%Intermediate goals: Erklaeren, wie design thinking in vis funktioniert. 
%
%Wenn wir infos finden: skizzieren, wie heutzutage ausbildung ablaeuft. Ueberleitung zu unserem teaching.
%
%Ende: Was haben wir gemacht? Aus eigener erfahrung haben wir gemerkt, dass es sinn macht. Warum denken wir, dass teaching und spaeter tooling der richtige ansatzpunkt ist? Wir reporten unseren weg, unsere erfahrungen, vorteile, und design practices, die man daraus ableiten kann.
%
%
%design thinking beruht auf der pipeline, wie designer ihre probleme loesen. Sie konzentrieren sich auf ein problem, und nehmen alle techniken, die es gibt. Legen es in ne box, und nehmen sich sachen raus, die die brauchen. Gross geschrieben wird: team, raum, prozess. 
%Hingegen bei problem-based: alle probleme werden identifiziert, die im weg sind, um zur loesung zu kommen. 
%Also: Solution: put things together. Problem: put things apart.
%
%Beispiel: Water consumption. 
%Solution: Erstmal eine variety an visualisierungen anschauen (spider chart, bar chart,...).
%Not-so-much-solution-based: Daten in Tableau/Excel, man denkt kaum nach, welche Visualisierung relevant ist, sondern verrennt sich schnell in details, damit es nicht doof aussieht.
%
%Hingegen solution: awareness ueber den kompletten design space--es gibt viele visualisierungsarten, tools, metaphern, etc. Fokus auf: was will ich mit meiner visualisierung erreichen bzw sagen? Kernaussage der Visualisierung



% Our desire to map information to graphical representations is more important than ever before. The reasons are manifold: rapid growth of available data, cheap and ubiquitous technologies, and, last but not least, the selective and sometimes rather short attention span of digital natives (e.g., Prensky et al.~\cite{prensky2001they}). Therefore, skills in the area of information visualization are often regarded as the key to communicate important messages via mass media. 

In our society, the demand for people being capable of creating meaningful and engaging visualizations rapidly outgrows the offer. The ability to visually transport a message to the broad masses requires a versatile education including computer graphics and visualization. However, we claim that our courses are often designed from a more academic point of view (which is not a critique!), and we tend to overlook the rather alarming, low level of visualization literacy of general audiences.

As researchers and lecturers, we sought for a possibility to enhance our courses in a way that would allow our students to create visualizations that are easy to understand, engage the viewers, and remain memorable over time. This paper presents our pilot lecture for undergraduate computer science students and reports results from our evaluations during its execution.

Our course design was particularly motivated by the book \textit{Dear Data}~\cite{lupi2016dear}, written by the two expert designers G. Lupi and S. Posavec, and its vivid discussion during the closing capstone at IEEE VIS 2017. The visualizations in that book were created by composing visualization knowledge and creativity. As a matter of course, such engaging results can be beneficial for a number of application areas, both entertaining and scientific in nature (cf. \FG{fig:teaser}). 

We wanted to know whether it is possible to enhance current visualization teaching such that students would be able to produce similar results to \textit{Dear Data} in terms of comprehension and engagement. In particular, our goal was to prevent students from any kind of tunnel vision that we often attribute to visualization novices. Instead, participants should rely on design thinking and hands-on exploration of the visualization space without being forced to proceed in the linear fashion that is often enforced by established tools.

Our teaching approach targets novices and practitioners with no background in design. The only methodology we borrow from that area is design thinking, or, more precisely, divergent thinking and brainstorming. Our hypothesis is that introducing design thinking is a valid way to increase the practitioners' awareness that there are far more ways than only line and bar charts to transport information. Design thinking motivates practitioners to alter their approach in problem solving, concentrating more on the solution to the problem instead of ``over analyzing'' the problem. The key feature of design thinking is to develop several prototypes that are used to find the final best fitting solution. It is more a creative way of solving a problem, encouraging practitioners to actually ``do'' something. Furthermore, such solution-oriented thinking should prevent the visual representation that is imposed by the software currently in use.

% Hence, one of our tasks as visualization experts is to establish ways to make such skills better accessible to a broader audience. We assume two main approaches: refining lectures and enhancing visualization tools. In both cases, we first need to understand how novices approach visualization process, where they struggle, and how software tools could assist them.

% Visualizations range from plain, black-and-white bar charts to fancy and maybe even manipulative infographics that we know from ads and newspapers. The fraction of art in visualization is often discussed (e.g., Tufte~\cite{Tufte:1986:VDQ:33404}, Bateman et al.~\cite{Bateman:2010:UJE:1753326.1753716}). We propose that an adequate answer might be ``it depends'', i.e., on what we want to achieve with a particular graphic. In our case, we focus on data-driven visualizations that present information in a visually appealing and engaging way, such as the infographics in \FG{fig:teaser} and \FG{fig:comp}.


%\TODO{viellt was aus concept uebernehmen -- unser ziel, divergentes denken zu lehren. Sonst klingt der erste satz so, als ob DD besser ist als alles, was vis leute machen}
% As visualization researchers and instructors, we wanted to know whether it is possible to enhance current visualization teaching such that students would be able to produce similar results in terms of comprehension and engagement. In particular, our goal was to prevent students from any kind of tunnel vision that we often attribute to visualization novices. Instead, participants should rely on design thinking and hands-on exploration of the visualization space without being forced to proceed in the linear fashion that is often enforced by established tools.


Designing such a course is an iterative approach and heavily relies on knowledge about the status quo, i.e., how novices actually proceed when they face a visualization task. Hence, we launched a teaching experiment to investigate the visualization creation pipeline and, more importantly, its interplay with the design thinking methodology. As a starting point for our teaching experiment, we chose the \textit{Dear Data} approach, i.e., our participants had to track certain data each week and create a meaningful visualization at the end of the week. The tracked data could be, for example, \textit{``water consumption''} or \textit{``music''}. Hence, participants had a large impact on the dataset generation and usually had a deep understanding of the data because it originated from their daily lives.

Our 12-week pilot course was accompanied by biweekly one-on-one semistructured interviews and monthly anonymized online questionnaires. During the 12 weeks, i.e., one semester, we varied the underlying homework conditions by letting the participants work alone and in groups of varying size to see how the conditions influence the visualization creation process. 

To summarize, this paper contributes  a preliminary course design, including the discussion of its limitations and drawbacks, and lessons learned along the way. We provide insights into the thinking process and the visualization pipeline of novices and expect that other visualization teachers can substantially benefit from these first steps into the systematic strengthening of visual literacy in education. 


 \begin{figure*}[t!]
 \centering % avoid the use of \begin{center}...\end{center} and use \centering instead (more compact)
 \includegraphics[width=2.0\columnwidth]{figures/comp}
 \caption{An extract from the produced results ordered by topic and group size. As can be seen here (and also confirmed by the questionnaire), visual metaphors played an important role regarding the final visualization. Also note that working in groups resulted mostly in digital submissions, as presented in \FG{fig:tools}.}~\label{fig:comp}
\end{figure*}

%We provided a topic each week and asked the subjects to create an appropriate visualization, as shown in \FG{fig:water}. Similar to the book \textit{Dear Data}~\cite{lupi2016dear}, the subjects collected and tracked the corresponding data on their own. For the last six topics, we established groups of two to four subjects to observe whether and how teamwork would influence the creation process.




%Post-Condition nach Intro: Leute sehen ein, dass design thinking bzw kreative visualisierungen sinn machen und staerker in vis bzw vis teaching integriert werden sollen.

\section{Related Work}

%wichtigkeit: mittel/gering, kann offline bearbeitet werden ohne grosse absprache.
%
%design thinking fehlt komplett. Auch: applications of DT in other sciences, erfolgsstories. 
%
%2 todos: design thinking (10-15), completion bzw mehr im vis, infographics, bla (25-30).

Our experiment is based on a combination of traditional visualization approaches and certain elements of design thinking. In the following subsections, we briefly discuss visualization creation models, core aspects of infographics, and related studies with visualization novices, and we provide a brief introduction into design thinking for nondesigners.

\subsection{Visualization}


%For an overview, we first present a number of fundamental works that classify different visualizations and corresponding processes. Then, we focus on infographics and visualization aesthetics and finally present two experiments that are most related to our approaches. 

The research on understanding visualization creation has resulted in a plethora of---partially contradicting---taxonomies, assumptions, and related discussions in the visualization community~\cite{bertin1983semiology,Card:1999:RIV:300679,Chi:2000:TVT:857190.857691,1382903}. In this regard, we mention the work by Shneiderman~\cite{shneiderman2003eyes} on the systematic visualization classification and the related prominent mantra: ``overview first, zoom and filter, then details-on-demand'', which is often a helpful thought process during visualization creation. Another reasonable starting point for visualization apprentices is the so-called periodic table by Lengler et al.~\cite{Lengler:2007:TPT:1712936.1712954}: the authors summarized over 100 visualization methods in order to structure available mechanisms and to create a useful asset toolbox for researchers and practitioners. 

Instead of such data-centered approaches, the high-level taxonomy by Tory et al.~\cite{1382903} focused rather on human factors in visualization processes. By inspecting and grouping the algorithms chosen during the visualization process, the authors illustrated the interplay between design and user models. Another different classification approach based on vision perception was proposed by Rodrigues et al.~\cite{rodrigues2006reviewing}. The authors utilized the knowledge about preattentive stimuli to describe visualization elements. In this context, we point readers to the work by Healey et al.~\cite{Healey:2012:AVM:2225054.2225226} for a better understanding of the underlying preattentive features such as motion or binocular rivalry~\cite{krekhov2019deadeye} and their role in visualization.

To design a successful visual representation, we also need to know how such graphics are perceived. Harrison et al.~\cite{Harrison:2015:IAD:2702123.2702545} examined the overall appeal of infographics and measured how quickly the aesthetic impression is formed. Hereby, three main aspects are often emphasized: comprehension, retention, and appeal (e.g., Lankow et al.~\cite{lankow2012infographics}). Appealing visualizations often require artistic methods, and there is an ongoing debate about how much of art is actually useful. For instance, Tufte~\cite{Tufte:1986:VDQ:33404} criticized chart junk, whereas Bateman et al.~\cite{Bateman:2010:UJE:1753326.1753716} showed that visual embellishments have a positive effect on retention. As a follow-up to that debate, Borkin et al.~\cite{6634103} executed a large-scale experiment with more than 2000 visualizations to study how exactly we can make our visualizations more memorable. 

Related to our evaluations are the following experiments: Bigelow et al.~\cite{Bigelow:2014:RDD:2598153.2598175} extensively studied professional designers and their workflow regarding visualization. The authors summarized current pain points and proposed patterns for the creation of tailored tools for these experts. In contrast, Grammel et al.~\cite{5613431} focused on novices. The authors pointed out the most prominent activities during visualization specification and also identified main barriers that occur during the process. Our work picks up on that idea, but shifts the focus towards aesthetically appealing and engaging data-driven infographics. 

To convey initial visualization knowledge to a broader audience, we recommend the article by Heer et al.~\cite{Heer2010ATT}. The authors conduct what they call a ``a brief tour through the visualization zoo'' to expose common visualization techniques. Similar to our teaching approach, the authors motivate, readers to explore the visualization design space to strengthen solution-oriented visualization creation.


Regarding ongoing research in visualization education, we emphasize the work by Roberts et al.~\cite{roberts2016sketching} on the ``Five Design-Sheet Methodology'' that establishes a more formalized design process for lo-fidelity prototypes. Similar to our goals, the authors underpin the necessity to explore different possibilities and to evaluate their effectiveness before narrowing down to a single visual representation. Also aligned with our course direction is the so-called ``VizItCards''~\cite{he2017v} toolkit, which should be seen as a workshop designed for graduate infovis classes. The authors focused on five learning objectives: design, ideate and compare, collaborate, apply, and synthesize. Our evaluation results show a similar execution process, but a less linear way of progression, e.g., rejecting the whole concept in the apply stage and returning to design.



%Related to the teamwork aspect of our experiment, Isenberg et al.~\cite{Isenberg:2008:ESV:1357054.1357245} created a framework in order to enhance visualization tools for such collaborative settings.

% Such a process of creating a visualization usually requires us to understand the underlying data first. One way to facilitate that task for novices is to enhance data exploration by automatically generating useful (intermediate) visualizations. Prominent examples for such systems are \textit{Show Me} by Mackinlay et al.~\cite{4376133} or the mixed-iterative system \textit{Voyager} by Wongsuphasawat et al.~\cite{7192728}.


%However, before visualizing, we often need to understand the underlying data first. One way to facilitate that task for novices is to enhance data exploration by automatically generating useful (intermediate) visualizations. Prominent examples for such systems are \textit{Show Me}~\cite{4376133} or the mixed-iterative system \textit{Voyager}~\cite{7192728}. 



% Harrison et al.~\cite{Harrison:2015:IAD:2702123.2702545} examined the overall appeal of infographics and measured how quickly the aesthetic impression is formed. To facilitate such studies, Siricharoen et al.~\cite{Siricharoen2017} proposed a infographic evaluation matrix with 46 questions. Although creating such visualizations is a creative process, guidelines such as image saliency~\cite{Yasuda:2016:EIB:2968220.2968224} can be used to generally enhance the outcome.

%
%Another extensive study by Harrison et al.~\cite{Harrison:2015:IAD:2702123.2702545} examined the overall appeal of infographics and measured how fast the aesthetic impression is formed. 


% As we see in our experiment, the visualization process is affected by whether subjects work alone or in groups. In this area, Isenberg et al.~\cite{Isenberg:2008:ESV:1357054.1357245} created a framework in order to enhance visualization tools for such collaborative settings. The scenario was also addressed by Halskov et al.~\cite{doi:10.1080/15710880701607404}, but with more emphasis on creativity aspects.






\subsection{Design Thinking}


Classically, design thinking can be described as a solution-focused problem-solving approach~\cite{Pusca:2018:DTAPS, DMJ:DMJ12001} that was well studied in the design domain~\cite{Goldschmidt:1994:VDTKA,Cross:1996:ADA}, but is also highly supported outside the design context within fields like IT~\cite{Brooks:2010:DDEFCS}, allowing users to view and solve their problems in a new way. Contrary to what is commonly believed, analytic aspects are also considered in design thinking as stated by Razzouk and Shute~\cite{Razzouk:2012:WDTI}: 

\begin{quote} 
Design thinking is generally defined as an analytic and creative process that engages a person in opportunities to experiment, create and prototype models, gather feedback, and redesign.
\end{quote} 


Inspiration, ideation, and implementation are the iterative stages identified within the available design thinking paradigms. Although design thinking is described differently~\cite{Razzouk:2012:WDTI,Buchanan:1992:WPDT} and, as pointed out by Dorst~\cite{Dorst:2011:CDTA}, could be seen as not well conceptualized, these three stages are often used as a basis~\cite{Palacin-Silva:2017:IDTISECC}. Inspiration focuses on the empathy of the client to support the search for solutions. During the ideation stage, various solutions are developed and tested. A selection of these solution sets is then utilized during the implementation stage to create prototypes, which are then refined iteratively until the best solution is found. As a summary, Lindberg et al.~\cite{Lindberg2011} and Pusca et al.~\cite{Pusca:2018:DTAPS} describe design thinking as two phases: exploring the problem space (inspiration) and inspecting the solution space (ideation and implementation). Similarly, our course encourages participants to explore their gathered data and to try out different visual representations to create a meaningful and engaging end result.



% Primarily two ``thinking'' approaches are utilized for solving problems: problem-focused (analysis) and solution-focused (synthesis)~\cite{Priest:1997:EPVSFSCS}. Problem-focused thinking concentrates on the problem, investigating what sustains the problem, its occurrence, and the trend of the problem. Usually problems are further subdivided until every subproblem can be analytically described \cite{Ho:2001:SPPDSDTDBNE}. On the other hand, solution-focused approaches concentrate on finding a solution to the problem, although they do not completely ignore the understanding of a problem. In other words, this approach could be described as ``doing then thinking''~\cite{Pusca:2018:DTAPS, Priest:1997:EPVSFSCS}. Creative strategies are utilized to produce various solutions considering the users' needs instead of confronting them only with the different aspects of the problem. 

% Solution-focused approaches are utilized by design experts where generating, synthesizing, and evaluating a solution are the key features of design expertise~\cite{Razzouk:2012:WDTI, Dorst:2001:CDPCP}. Classically, design thinking can be classified as a solution-focused problem-solving approach~\cite{Pusca:2018:DTAPS, DMJ:DMJ12001}, whereas analytic aspects are also considered as stated by Razzouk and Shute~\cite{Razzouk:2012:WDTI}: 

% \begin{quote} 
% Design thinking is generally defined as an analytic and creative process that engages a person in opportunities to experiment, create and prototype models, gather feedback, and redesign.
% \end{quote} 





% Design thinking (DT) is a paradigm extracted from the designers ``thinking'' process~\cite{Razzouk:2012:WDTI} used for problem solving, especially for handling wicked problems as described in the work of Buchanan~\cite{Buchanan:1992:WPDT}. As stated by Dorst~\cite{Dorst:2011:CDTA}, DT is not well conceptualized and there is more than one DT paradigm. However in the last few years several models emerged, following the different theories and situations from design methodology, psychology, and education, that share similar ideas and concepts. DT was well studied in the design domain by, e.g., Goldschmidt~\cite{Goldschmidt:1994:VDTKA}, Cross et al.~\cite{Cross:1996:ADA}, but is also highly supported outside the design context within fields like IT~\cite{Brooks:2010:DDEFCS}, allowing users to view and solve their problems in a new way instead of relying only on analytically oriented approaches~\cite{Kimbell:2011:RDTP}. 

% In genreral, two ``thinking'' approaches are utilized for solving problems: problem-focused (analysis) and solution-focused (synthesis)~\cite{Priest:1997:EPVSFSCS}. Problem-focused thinking concentrates on the problem, investigating what sustains the problem, its occurrence, and the trend of the problem. Usually problems are further subdivided until every subproblem can be analytically described \cite{Ho:2001:SPPDSDTDBNE}. On the other hand, solution-focused approaches concentrate on finding a solution to the problem, although they do not completely ignore the understanding of a problem. In other words, this approach could be described as ``doing then thinking''~\cite{Pusca:2018:DTAPS, Priest:1997:EPVSFSCS}. Creative strategies are utilized to produce various solutions considering the users' needs instead of confronting them only with the different aspects of the problem. 



% Teaching and course organization becomes more and more important to make students sensitive to human-centered thinking. In education, DT can be used in two ways: as teaching material or for the design of the lecture~\cite{McKilligan:2017:DTCCTLPE, GEORGIEV:2012:DTO}.



% Companies like Microsoft use such paradigm concepts to improve their processes, solutions, and working environments~\cite{Palacin-Silva:2017:IDTISECC}. It is also important to produce solutions that are human-centered considering the requirements, experience, and situations of humans, especially of the user~\cite{Palacin-Silva:2017:IDTISECC}. Teaching and course organization becomes more and more important to make students sensitive to human-centered thinking. In education, DT can be used in two ways: as teaching material or for the design of the lecture~\cite{McKilligan:2017:DTCCTLPE, GEORGIEV:2012:DTO}.

% DT further enhances the communication within multidisciplinary teams, and due to its simplicity it is equally accessible for both experts and nonexperts. Primarily two ``thinking'' approaches are utilized for solving problems: problem-focused (analysis) and solution-focused (synthesis)~\cite{Priest:1997:EPVSFSCS}. Problem-focused thinking concentrates on the problem, investigating what sustains the problem, its occurrence, and the trend of the problem. Usually problems are further subdivided until every subproblem can be analytically described \cite{Ho:2001:SPPDSDTDBNE}. On the other hand, solution-focused approaches concentrate on finding a solution to the problem, although they do not completely ignore the understanding of a problem. In other words, this approach could be described as ``doing then thinking''~\cite{Pusca:2018:DTAPS, Priest:1997:EPVSFSCS}. Creative strategies are utilized to produce various solutions considering the users' needs instead of confronting them only with the different aspects of the problem. 

% Solution-focused approaches are utilized by design experts where generating, synthesizing, and evaluating a solution are the key features of design expertise~\cite{Razzouk:2012:WDTI, Dorst:2001:CDPCP}. Classically, design thinking can be classified as a solution-focused problem-solving approach~\cite{Pusca:2018:DTAPS, DMJ:DMJ12001}, whereas analytic aspects are also considered in DT as stated by Razzouk and Shute~\cite{Razzouk:2012:WDTI}: 

% \begin{quote} 
% Design thinking is generally defined as an analytic and creative process that engages a person in opportunities to experiment, create and prototype models, gather feedback, and redesign.
% \end{quote} 

% Inspiration, ideation, and implementation are the iterative stages identified within the DT paradigms that are similar to the features in design expertise. 
% Although DT is described differently, the three stages are often used as a basis.~\cite{Palacin-Silva:2017:IDTISECC}. Inspiration focuses on the empathy of the client to support the search for solutions. During the ideation stage, various solutions are developed and tested. A selection of these solution sets is then utilized during the implementation stage to create prototypes, which are then refined iteratively until the best solution is found. As a summary, Lindberg et al.~\cite{Lindberg2011} and Pusca et al.~\cite{Pusca:2018:DTAPS} describe DT as two phases: exploring the problem space (inspiration) and inspecting the solution space (ideation and implementation).



\section{Developing the Course Curriculum}



Our preliminary course design mainly targets university students in computer science or related areas. We assume participants have no or little knowledge in visualization and no design background. Although we introduce certain basic elements of design thinking, the design portion is kept minimal, and, therefore, the course execution is reasonable for the majority of cg/vis instructors. Our teaching approach is not meant to replace current courses and should be considered as a potential extension. We suggest to administer the course before the main cg/vis lectures to offer a first hands-on experience in visual literacy. The primary course objective is to \textbf{learn how to turn manifold datasets into  meaningful and engaging visualizations for a broader audience}. We split the objective into the following components:

\begin{itemize}
  \setlength{\itemsep}{1pt}
  \setlength{\parskip}{0pt}
  \setlength{\parsep}{0pt}
\item \textbf{understanding data:} learn how to collect, explore, group, classify, and dismiss data
\item \textbf{visualizing data:} learn how to map data to an appropriate visual representation (i.e., the basics from traditional visualization teaching courses)
\item \textbf{design thinking:} learn to combine divergent thinking and visualization techniques to transport key messages about the data
\end{itemize}



\begin{table}[tb]
  \caption{Assignment topics and according group sizes during our pilot course. The students could freely interpret the topic and decide what kind of associated data to track and to visualize.}
  \label{tab:topics}
  \scriptsize%
	\centering%
  \begin{tabu}{%
	r%
	*{7}{c}%
	*{2}{r}%
	}
  \toprule
   Topic & Assignment Duration & Group Size   \\
  \midrule
	New Acquaintances & 1 week & alone   \\
  Seating & 1 week & alone   \\
  	Music & 1 week & alone   \\
  Colors & 1 week & alone   \\
  	Water & 2 weeks & alone   \\
  Eating & 1 week & 2 students   \\
  	Screens & 1 week & 2-3 students   \\
  Joy & 2 weeks & 3-4 students   \\
  	Infographics Contest~\cite{contest} & 2 weeks & free choice   \\
  \bottomrule
  \end{tabu}%
\end{table}





Especially the last subgoal is a key difference to common visualization courses. From our prior teaching experience, we noticed that many students struggle to find an appropriate kind of visualization because of their problem-solving pipeline. More precisely, students tend to pose questions such as ``How can I fit the data into a line chart/bar chart'' instead of asking ``What representation is suited best to transport certain information''. Students usually try to find the best solution by relying only on their gathered data instead of producing several  representations and using them as a basis to decide which fits best the current task. In other words, we observed that less experienced practitioners often perform an overhasty selection from a small number of basic visualization techniques. In our opinion, such a quick convergence often results in the sort of tunnel vision that hinders practitioners from revising their primary decision and from reconsidering alternative visual representations.


We wanted find out whether and how divergent thinking can be integrated into the education pipeline to solve the outlined issue. In our pilot course, we integrated the three stages of design thinking (inspiration, ideation, and implementation) as proposed by Palacin-Silva et al.~\cite{Palacin-Silva:2017:IDTISECC}. As a starting point, we applied the \textit{Dear Data} procedure: students should gather data from their daily lives on a weekly basis and create suitable visualizations. \textit{Dear Data} itself is an extensive example of creative and diverse visualization techniques. Hence, we assume that the underlying procedure---and not only the skills of the authors---might have a positive impact on divergent thinking. Furthermore, we argue that collecting and visualizing personal data during education has certain benefits over working with predefined datasets. Students tend to understand their data, and, according to our observations, experience significant motivation to explore and visually present their findings.
After collecting their data, they were directly shifted to the inspiration stage to view their data and search for some opportunities and interesting features that could answer the question: ``What is the message of my data?'' In the ideation stage, students should make their ideas tangible, selecting different types of representation for each idea to develop a basis for the final stage. In this stage, students iteratively evaluate their solutions to decide on one idea and on one visual representation of that idea. The benefits of this pipeline are the possibility to visually review several ideas and representations simultaneously. We assume that this solution-focused problem-solving approach helps novices with less experience to derive meaningful visualizations.


The following course routine remains roughly the same during the course duration. For each session, students have the assignment to create an engaging, comprehensive visualization based on the data that they tracked for a given topic as shown in \TA{tab:topics}. Participants can interpret the topic the way they want and freely choose the subdimensions to track. For instance,  ``music'' could include genres, current mood, current place, or the hardware the music is played on. This freedom explicitly enforces the students to carefully think about the data and possible hypotheses and correlations they want to discover. Optimally, students make these data-related decisions based on brainstorming, which gently pushes them into a divergent thinking mode. In other words, the students' main goal is to extract core messages from data and communicate them in a visual way.

% table: assignment - duration - mode - comments
 \begin{figure}[t]
 \centering % avoid the use of \begin{center}...\end{center} and use \centering instead (more compact)
 \includegraphics[width=\columnwidth]{figures/proto}
 \caption{Students should submit their intermediate prototypes to demonstrate how their ideas evolved over time. Groups often started by producing 3-6 initial lo-fidelity concepts and then merging selected components into intermediate results.}~\label{fig:proto}
\end{figure}

\begin{table}[tb]
  \caption{Structure of our online questionnaire. Most of the 103 questions were based on qualitative insights from the semistructured interviews during the course.}
  \label{tab:questions}
  \scriptsize%
	\centering%
  \begin{tabu}{p{1.8cm} p{6.2cm}}
  
  
%  {%
%	r%
%	*{1}{c}%
%	*{4cm}{r}%
%	}
  \toprule
   Category & Example Questions (shortened)    \\
  \midrule
  \addlinespace
  \textbf{Visualization Creation Pipeline} & 
  24 Questions targeting the whole creation process and particular steps, e.g.: \newline
  \textit{
  \tabitem describe stepwise your weekly approach\newline
  \tabitem describe how your process evolved during the course \newline
  \tabitem which step did you enjoy most and why \newline
  \tabitem which step was the biggest challenge for you and why \newline
  \tabitem which was the most time-consuming step and why}
\\
  \addlinespace
  
  
  \textbf{Data Tracking} & 
    8 Questions related to data acquisition, e.g.: \newline
  \textit{
    \tabitem how did you acquire data (digital/analog) \newline
  \tabitem which tools did you use for data acquisition \newline
  \tabitem how frequently did you acquire data \newline
   \tabitem did you track enough dimensions
   }
\\
  \addlinespace
  
    \textbf{Data Analysis} & 
    9 Questions about data exploration, e.g.: \newline
  \textit{
     \tabitem how much time did you spend on analyzing your data\newline
  \tabitem which tools did you use to analyze the data\newline
  \tabitem have you ever adjusted/modified your data to better fit the visualization}
\\
  \addlinespace
  
  
    \textbf{Core Message} & 
    8 Questions about the message to be transported, e.g.: \newline
  \textit{
  \tabitem at which point did you establish your message(s) \newline
  \tabitem how difficult was it for you to establish a message \newline
  \tabitem how often and why did you re-adjust your message}
\\
  \addlinespace
  
  
      \textbf{Visualization} & 
    25 Questions related to the vis. creation, e.g.: \newline
  \textit{
  \tabitem how many intermediate drafts have you created on average \newline
  \tabitem which tools did you use to create the drafts \newline
  \tabitem describe your common iterations during the drafting stage\newline
  \tabitem which tools did you use for your final vis. \newline
  \tabitem how did you decide which colors to utilize \newline
  \tabitem what aspects of the final vis. were the most important for you \newline
  \tabitem what were the common reasons to re-do your vis.
  }
\\
  \addlinespace
  
  
        \textbf{Teamwork} & 
    29 Questions related to the second half of the course when students had to work in group, e.g.: \newline
  \textit{
  \tabitem describe your creation process in team \newline
  \tabitem describe whether and how teamwork positively influenced your results \newline
  \tabitem rate the data tracking/acquisition/analysis/ complexity compared to your previous work \newline
  \tabitem describe whether and how your process was different when working with friends vs. working with ``strangers'' \newline
  \tabitem in future, would you rather prefer visualizing alone or in group and why
  }
\\
  \addlinespace

  \bottomrule
  \end{tabu}%
\end{table}


 \begin{figure*}[t!]
 \centering % avoid the use of \begin{center}...\end{center} and use \centering instead (more compact)
 \includegraphics[width=1.9\columnwidth]{figures/pipe}
 \caption{The nonlinear, iterative creation approach based on aggregated reports of our subjects.}~\label{fig:pipe}
\end{figure*}


As we want to keep our influence on that solution-oriented process as minimal as possible, we explicitly do not impose any limitations on how the data should be tracked or how the final visualization should be created. The only requirement that we communicate is the submission format for the visualization result: DIN A4, either digital or analog, and an additional page for the legend, if needed. In addition to the final result, students should also submit their early and intermediate prototypes as shown in \FG{fig:proto}. That additional material helps to understand the decision making and the divergent thought process of the students and serves as a discussion outline during final presentations.

After the submission, students have to present their outcomes during our weekly meeting. From the students' point of view, the weekly meeting slot has two main purposes. First, they have to present their work and get the opportunity to learn from other outcomes. Second, the students receive feedback from the lecturers. Our feedback focuses on ad hoc explanation and background on the utilized visualization techniques. In particular, we talk about the best practices, benefits, and drawbacks of a certain method, e.g., of a radar chart. Note that we do not postulate that our a posteriori teaching approach is superior to a priori methods, i.e., outlining the visualization methods before the hands-on part. Our main motivation is rather to explore where unbiased novices struggle and to see how diverse their results could potentially be before an extensive theoretical briefing. For future courses and pilot experiments, we suggest to enhance the course design by a small amount of frontal instructions and explore how that influences the creation pipeline.





%Hence, our research also included an in-depth analysis regarding the visualization abilities and issues of novices.

%wichtigkeit fuer accept: abhaengig davon, wie gut wir unser modell in der DT theorie verankern koennen und mit dem 0815 vis teaching mergen.
%
%hier fehlt uns wissen ueber design thinking, rel. work notwendig.
%
%Jens nach folien ueber infovis fragen. CS Infovis Harward, MIT, ... .
%
%High-Level goal: explain the what behind our project.
%
%Our theoretical model how DT can be applied to vis teaching.

\section{Pilot Experiment}

In the following section, we summarize the realization of our concept as a 12-week teaching experiment and our applied research apparatus. We were driven by four particular questions: 

\begin{itemize}
  \setlength{\itemsep}{+--+-++1pt}
  \setlength{\parskip}{0pt}
  \setlength{\parsep}{0pt}
\item How do novices proceed, i.e., what is their pipeline?
\item How do design thinking and visualization creation intertwine?
\item How does collaboration influence the process?
\end{itemize}




Our experiment was led by one visualization faculty member and two senior researchers (with background in cognitive science and computer science), all with prior experience in visualization education (Computer Graphics, and InfoVis/SciVis courses). We had 11 participants (8 females, 4 males), aged 20 to 31 ($M = 22.73,\,SD = 3.95$). At the beginning of the course, all participants reported that they were beginners regarding visualization and had no background in design education. The subjects studied either computer science (5 subjects) or applied cognitive and media science (6 subjects).



During the first 6 weeks, subjects worked alone, whereas in the second half, we formed groups of two to four participants and asked each group to create one collective visualization. We did not impose any restrictions about whether the tracked data should be aggregated for the whole group or remain visible for each individual. We also offered the students the opportunity to participate in an infographics contest~\cite{contest} and to apply their gathered skills on external datasets. A more detailed overview of our topics can be found in \TA{tab:topics}.


We surveyed the participants in two rounds of one-on-one semistructured interviews during the course, i.e., after 4 and after 8 weeks, and one anonymized online questionnaire at the end of the experiment. The questionnaire structure is presented in \TA{tab:questions}. The subsections, particular questions, and research directions are mostly based on the observations of the preceding semistructured interviews.





%``''

%wichtigkeit: mittel, hier sind die obj, gruende fuer ein reject, die sollte man minimieren. Hervorheben, dass es n pilot exp. war.
%
%todo: viele details ergaenzen und wahrheit reinbringen, die reviews einbauen. 
%todo: begruenden, warum wir sehr wenig eingegriffen haben (montesourri-methode, naaajaaa...)
%todo: sagen, dass kaum design input gegeben wurde, focus explizit auf vis.




%Our experiment was partly inspired by the book \textit{Dear Data}~\cite{lupi2016dear} written by the two expert designers G. Lupi and S. Posavec. On a weekly basis, the authors each created one visualization on a postcard based on predefined topics and exchanged the results. The visualizations were based on data that the authors collected in vivo during that week. 
%
%The resulting engaging visualizations were actively discussed in several communities. Hence, we wondered whether there is a way to analyze and systemize the creation of such infographics. In particular, we were interested whether such results are reproducible by design and visualization beginners, i.e., the broad masses. We were driven by three particular questions: \textit{How do novices proceed, i.e., what is their pipeline? Are there common pain points?} And \textit{how does collaboration influence the process?}

%\begin{itemize}\compresslist%
%\item How do novices proceed, i.e., what is their pipeline?
%\item Are there common pain points?
%\item How does collaboration influence the process?
% \end{itemize}



%We did not impose any restrictions how a certain topic must be interpreted and which data should be gathered and visualized. We allowed the participants to freely choose their tools (digital and analog) during the process. The only goal that we communicated was \textit{to create a meaningful and engaging visualization about a particular topic.} 
%
%In the first six weeks, subjects worked separately. For the last six weeks, we formed groups of two to four participants and asked each group to create a single visualization.  


\section{Results And Discussion}
\subsection{Data Exploration Issues}

%wichtigkeit: wichtig
%
%experten fanden ergebnisse toll.
%statistik zu den tools, teamwork
%qualitative interview-antworten gruppiert nach thema.
%entwicklung ueber den zeitraum.


%wichtigkeit: sehr wichtig
%
%unsere design implications
%link zu unserem concept und zu DT allgemein.
%raum fuer verbesserungen: teamwork muss kontrolliert durchgefuehrt werden
%limitations und drawbacks
%
%mapping der erkenntnisse auf vis-tools, um solche kreativen visualisierungen zu supporten.




%Theoretical dt integration concept, weil... (motivation)
%umsetzung an bsp vom pilot experiment mit dem ergebnis: blub
%
%in future,  erweiterung des modells, einbauen von control elements (mehr vis, besseres teamwork). 
%Vor allem: (ggf auch in discussion) mapping der erkenntnisse auf vis-tools, um solche kreativen visualisierungen zu supporten.




In order to extract similarities in the creation processes, we asked all participants to describe their weekly approaches in a step-by-step fashion. The resulting visualization pipeline is depicted in \FG{fig:pipe}. One important observation is that participants often ignored the data analysis step. Accordingly, subjects rarely filtered or sorted out data. This finding is also confirmed by the given answers in the data analysis subsection of the questionnaire. We suppose that skipping the data analysis step is the most relevant issue and should be addressed more explicitly in our next course iteration. 

Although the participants created several intermediate visualizations, the reason for iteration was purely design-based, i.e., these visualizations were never used as a tool to examine the data and search for correlations. Instead, participants reported the reason was to \textit{``unveil interesting trends by intuition, by looking at raw data or data tables, and by manually computing mean values'' (P3; 9 answers)}. Similarly, 10 subjects stated that they had formulated the main message or goal of their visualization during or even before the data acquisition. In other words, we should explicitly advise novices to thoroughly explore the underlying data. In most cases, standard tools such as Excel would minimize errors during acquisition and also provide useful default visualizations that help users to discover interesting trends and correlations.


 \begin{figure}[t]
 \centering % avoid the use of \begin{center}...\end{center} and use \centering instead (more compact)
 \includegraphics[width=0.9\columnwidth]{figures/count}
 \caption{Students utilized a plethora of visualization techniques throughout the pilot experiment, i.e., these techniques tend to be familiar and comprehensible even for beginners.}~\label{fig:count}
\end{figure}






\subsection{Impact from Design Thinking}

All participants reported that creating the final visualization was most challenging and most time-consuming, but also most exciting. Surprisingly, they do not want any automated tools for this step, and mostly \textit{``enjoy the freedom of choice between hand drawings and digital creations'' (P10; 8 answers)}. Overall, students reported performing a number of quick iterations on different visualization approaches before going in-depth regarding the final creation. Hence, the introduction of design thinking elements indeed motivates students to explore the visualization design space and to experiment with a diversity of techniques and metaphors (cf. \FG{fig:comp}). 
 
% Our assumption is underlined by subjects' responses to the question whether they could imagine a software tool to aid them during the whole creation process. Most participants desired a tool that performs automated data tracking, allows them to easily enter hand-captured data, and performs live visualizations of the data \textit{``because manual computations are error-prone and time-consuming'' \textbf{(P1)}}. 

% here: design thinking

We also counted and classified the resulting visualizations by projecting the outcomes onto canonical visualization techniques where applicable. During our classification process, we mostly relied on the periodic table by Lengler et al.~\cite{Lengler:2007:TPT:1712936.1712954}. The resulting distribution of visualization techniques is given in \FG{fig:count}. That summary underlines the diversity of utilized methods, even without a prior introduction by the instructors. In other words, these visualizations could be considered to be very intuitive and familiar to beginners.

\begin{figure}[t]
 \centering % avoid the use of \begin{center}...\end{center} and use \centering instead (more compact)
 \includegraphics[width=\columnwidth]{figures/tools}
 \caption{Tools used by subjects for data tracking and visualization.}
 \label{fig:tools}
  \vskip -3mm
\end{figure}

When asked about visualization-specific issues, multiple subjects reported a reverse learning effect: \textit{``I think I needed more time each week because I ran out of visualization ideas''}. Other participants mentioned limited craftsmanship: \textit{``It happens often that you mix up certain symbols or choose the wrong colors'' (P8; 5 answers)}.

We conclude that design thinking motivates novices to experiment with a broader range of visualization methods. That, in return, potentially increases the probability of finding a well-suited visual representation. We should not bind apprentices to a particular visualization tool as outlined by \FG{fig:tools}, and should provide enough example visualizations as a source of inspiration. 


\subsection{Visualization Quality from Students' Perspective}

% ``parentheses''
% Issues: missing data (lost paper), forgot to note, bias through awareness (2x !)



 
%\subsection{Most error-prone steps.}
%
%Creation of vis: "Am Anfang noch mehr als im weiteren Verlauf des Projekts, da ich viele Daten mit vielen verschiedenen Symbolen reinbringen wollte und einige Symbole vertauscht habe. Auch die Farbwahl und Symbolwahl war nicht immer passend.", "eine komplexe Sache in ein abstraktes Muster zu bekommen ist denke ich am fehleranfälligsten
%solange es nach dem ja/nein oder 0/1 Prinzip läuft", "Man vermalt sich, verzählt sich, vergisst eine Ausprägung"
%
%
%
%Issues when doing final vis? Rescaling the vis because stuff did not fit. Gap between idea (how it should look) and final result, hard to put all data in. Hard to find a suiting vis (2).










%\subsection{Which step was least exciting?}
%All participants hated data tracking. Difficult to integrate into everyday routine. Also: thinking, which data should be gathered. Furthermore, frustration about gathering influenced the day and the data, participants didnt know how to eliminate this noise variable.
%
%\subsection{Which step was most exciting?}
%All participants liked the creation of the visualization (either drafting or final creation) the most fun. Most reasons were: Allowed creativity, represented the final result, playing and experimenting with data.
%
%\subsection{Biggest Challenge?}
%Most agreed that coming up with the vis idea was the most challenging part. In contrast, least challenging was to decide which variables should be tracked, which seems to be a contradiction!

%These iterative improvements of vis were reported to be the most time-consuming.
%Also: The lack of tools and skills for final vis plays a role: "Mir fehlen teilweise die nötigen Fähigkeiten, um meine gewünschten Visualisierungen in den geläufigen Programmen umzusetzen. Das führte dazu, dass teilweise für einfache Dinge mehrere Stunden verschwendet wurden.".


%
%\subsection{Improvements over time}
%Finding the vis metaphor (final vis), data acquisition is more structured. On the other hand, 









In retrospect, we asked all participants what they thought is important for a good visualization. The most prominent factors according to the participants are \textit{appeal}, \textit{metaphor}, and \textit{comprehension} (intended goal). Regarding aesthetics, the choice of colors and shapes played a big role: \textit{``I tried to choose highly differing colors for different attribute types, and varied the gradation to further subdivide an attribute'' (P4; 6 answers)}. Also, some participants preferred a \textit{``minimalistic and intuitive design'' (P11; 3 answers)}.

Regarding the comprehension aspect, subjects told us that their visualization \textit{``should reveal important trends, differences and similarities.''} All subjects indicated that \textit{``others should be able to quickly grasp the important points and understand the core message of the visualization'' (P5, 10 answers)}. However, no one mentioned the memorability aspect of the visualization. However, we observed that memorability, which is the third pillar of good infographics~\cite{lankow2012infographics} along with comprehension and appeal, is often neglected. We suggest to emphasize the importance of memorable representations~\cite{6634103,Bateman:2010:UJE:1753326.1753716}, as this aspect seems to be the least intuitive and present from the students' point of view.



\begin{figure}[t]
 \centering % avoid the use of \begin{center}...\end{center} and use \centering instead (more compact)
 \includegraphics[width=\columnwidth]{figures/teams}
 \caption{Perception of teamwork compared to working alone.}
 \label{fig:team}
\end{figure}


%\subsection{What is a Good Vis? Setting Goals}
%In general, aesthetics (metaphor) and core message (intended goal) play the most important role.
%"Die Metapher, also das man in der Visualisierung die Aufgabe wiedererkennt. 
%- Farb- und Symbolwahl
%- einfache schnell erkennbare Visualisierung 
%- Was möchte ich überhaupt mit der Visualisierung zeigen? 
%- Worauf habe ich meinen Fokus gelegt?", "dass das was ich Repräsentieren will auch deutlich wird. Also der Schwerpunkt meines Themas und natürlich auch, dass es gut aussieht. Aber trotzdem einfach zu verstehen ist, indem man Form und Farbe angemessen wählt."
%
%%What was most important for you for the final vis? fifty-fifty split betweeen how it looks and what it tells. \textbf{Appeal}: "Am meisten habe ich auf die Farb- und Symbolwahl und Metapher geachtet.", "Ich habe besonders darauf geachtet, ob ich das schön finde, und ob man die Daten auch gut erkennen kann. Außerdem habe ich geguckt, ob alles verständlich ist und ob man die Farben auseinanderhalten kann", "Dass es ästhetisch schön aussieht und die Daten trotzdem leicht entnehmbar sind.", "Gleiche Abstände, zwischen den Objekten, eine eingängige Reihenfolge, eine eingängige Fabwahl", "Minimalistisches Design, Schnelles Verständnis der Legende, intuitives Verständnis, metaphern zur Hilfe", "Minimalistische und klar erkennbare Visualisierung."
%%
%%How they choose colors? Colors should have meaning and differ from each other and do not distract: "sie mussten sich angemessen unterscheiden und hilfreich sein und nicht ablenken (unterstützende Funktion)". Difference: "Möglichst unterschiedliche Farben bei unterschiedlichen Variablen. Farbabstufungen oder Farben der selben Farbfamilie, wenn eine Variable unterteilt wurde / bei Zusammenhängenden werten, etc.". Also: shoud fit to topic.
%
%\textbf{Correlations, Relations, Trends (Comprehension)}: "Zusammenhänge und Unterschiede sollten klar werden", "Das die Visualisierung einen Mehrwert hat, also das man aus der Visualisierung eine neue Erkenntnis herauslesen konnte.", "die Richtigkeit und die Anschaulichkeit", "Bestimmte Informationen sollten möglichst schnell und gut zu erkennen und das Gesamtbild optisch ansprechend sein."
%
%
%Also: readability, and that certain aspects are easy to grasp (comprehension). Also minimalism and simplicity.
%We can back-track these reports to the three core principles of comprehension, retention, and appeal. 
%
%

%\textbf{plot: acquisition tools} used tools: Pen and paper (9), Smartphone or Note App (3), Photoshop (1), PowerPoint (1), Word (1), Excel (only one!)
%
%\textbf{plot: vis tools} Tools: Buntstifte oder Filzstifte (3), Kleber Schere Schablonen (1), Ppt (4), Excel (2), Illustrator (2), Gimp / Photoshop (4), Paint (3), Word (1), Wasserfarben (1)

\subsection{Visualization as a Group Assignment}

Our participants had to create the last six visualizations in groups of varying size. The exact group sizes and according topics are shown in \TA{tab:topics}. Our final questionnaire regarding the teamwork part included a number of relational questions and, thus, mostly accounted for the experienced changes in the visualization creation process. 

As can be seen in \FG{fig:team}, the majority reported that the collaborative process is more complex, time-consuming, and less fun. One particular reason is that subjects had to make compromises: \textit{``Our group result was always sort of in-between without a clear structure, and I felt that creativity suffered a lot by making too many compromises'' (P10; 3 answers)}. The group size also influenced the subjects' perception on collaboration. In contrast to groups of three or four, participants stated that  \textit{``Working in a group of two was much more efficient thanks to the improved communication and more different ideas that could be evaluated'' (P8; 4 answers)}. 

We noted that nearly all team creations were done digitally. In contrast, about half of the solo results were created in an analogous manner, as shown in \FG{fig:tools}. Participants stated that the digital way allowed easier modifications of ongoing work: \textit{``If someone painted a green car and we disliked the color, he did not have to repaint it by hand'' (P9; 8 answers)}. The toolchain diversity was also mentioned: \textit{``Everyone was skilled at different tools and we often worked with multiple programs at the same time'' (P4; 7 answers)}.


\begin{figure}[t!]
 \centering % avoid the use of \begin{center}...\end{center} and use \centering instead (more compact)
 \includegraphics[width=\columnwidth]{figures/barrier}
 \caption{Groups often relied on a barrier-based approach. Instead of agreeing upon a single visualization, each member created several iterations of own ideas. During their meetings, members gave mutual feedback and decided whether a particular approach should be dropped or merged.}
 \label{fig:barrier}
\end{figure}


% \textbf{$\Rightarrow$Design Implication 4: }\textit{If teamwork is required, novices tend to perform better in dyads rather than in larger groups. Also, we should emphasize the use of collaboration and communication tools}. For instance, few beginners know that the software they are using, e.g., Excel and PowerPoint, comes with built-in live collaboration support.  

% Surprisingly, the groups rarely met in person to work on their visualizations. Instead, all groups relied only on \mbox{WhatsApp} and Skype with screen sharing, and no other collaboration tools were utilized. We could extract two main reasons from the provided answers. First, as usual, students often struggle to find a meeting slot that suits all group members. In the future, we will include an additional weekly time slot that is reserved for teamwork to resolve that issue. 


A particularly interesting observation was what we called a \textit{barrier-based approach}, as outlined in \FG{fig:barrier}. Groups repeatedly reported a quite uncommon division of labor: after agreeing on data dimensions to be tracked, each member created his or her own versions and iterations of the visualization. Then, students mutually showcased their progress and provided feedback, but then continued to work on own iterations. Only a few days before the deadline, contradicting or disliked approaches were completely discarded, and the group effort was bundled into towards one or two promising visualization candidates.

One straightforward limitation of that approach is certainly the amount of work done in vain, as students had to drop a large fraction of late-stage prototypes. On the other hand, such an approach allows them to explore a significantly larger design space due to the late convergence moment. Furthermore, students get used to letting their product go in favor of a more compelling team result.


\subsection{Limitations of the Experiment}
Although we were able to gather valuable data from the given responses, we recommend to consider the current findings as an intermediate result due to the low amount of pilot participants. Aspects such as memorability also need repeated evaluations in the future to measure the long-term effect strength. Furthermore, we suggest a more refined assessment of the overall course effectiveness, i.e., to measure how well the participants' visual literacy and visualization skills improved during the course.


%What was different? You had to find compromises (!! negative !!), setting up meetings and having remote meetings is difficult. Finding interesting things in data was more time-consuming: "Das Datenvergleichen hat mehr Zeit in Anspruch genommen, also wo finden wir einen Mehrwert, einfach weil es mehr Daten waren.
%Welche Variablen tracken wir? Darüber hat es zu Anfangs auch manchmal etwas Uneinigkeit gegeben.
%Die Visualisierung hat noch ein wenig länge gedauert, weil jeder natürlich seine Ideen mit rein bringen wollte." 
%
%Also, negative comments: "Die Daten die man sammeln wollte wurden nicht gründlich genug überdacht. Die Datensammlung wurde nicht nochmal auf Fehler überprüft. Die Visualisierung wurde erst spät gestartet.", "Jeder bringt eigene Ideen ein und man muss sich auf wenige Umsetzungen festlegen. Man muss mehr auf die Anderen eingehen, damit auch alle zufrieden sind"
%
%Difference in toolchain? "Ja. Vorher habe ich alles analog gemacht und in der Gruppe dann zu Anfang auch analog, aber später dann digital. Bei mehreren Daten und wenn man den Vergleich zwischen den Personen sehen möchte, sieht es ordentlicher in einer digitalen Version aus. Außerdem ist es von dem Zeitmanagement einfacher, da man sich nicht unbedingt treffen muss. Es geht auch schneller in dem Sinne z.B. jemand hat ein grünes Auto gemalt, dem anderen gefällt die Farbe aber nicht, so müsste man ein neues malen; am Laptop kann man ganz schnell die Farbe ändern.". Tool diversity: "Ja, jeder hat seine speziellen Skills in unterschiedlichen Programmen mitgebracht, weshalb man oft mit verschiedenen Programmen gleichzeitig gearbeitet hat." 
%
%One important change: nearly all submissions were done digitally: "Die Visualisierung erfolgte Digital und nicht Analog, es wurde also mehr mit Photoshop/Illustrator gearbeitet. Die Abgabe Digital zu erstellen war viel einfacher als Analog. Veränderungen an Skizzen konnten dann über Screenshots oder Screensharing geteilt werden, außerdem war es einfacher die große Menge an Daten von mehreren Personen in einer Digitalen Skizze zusammenzufassen."
%
%\textbf{infographics: comparison solo-team as bar chart}. 

%Hereby, compromises were regarded as one issue: "Weil wir uns einigen mussten und dann so ein Mittelding aus allem entstanden ist, was meiner Meinung nach in diesem Themenbereich eher kontraproduktiv ist, da so die klare Struktur verloren geht, die eine Visualisierung ausmacht.
%Es haben klare Rollen und Aufgabenfelder innerhalb der Gruppen gefehlt, die sich (zumindest in meiner ersten Gruppe) auch nicht über die Zeit ohne eine höhere Instanz, die diese Verteilt, hätten bilden können.", "es war schwer einen Konsens zu finden und somit bin ich, meiner Meinung nach, viele Kompromisse eingegangen, die ich alleine mit mir nicht gemacht hätte ich habe keine guten Skills am PC und daher konnte ich mich nicht wirklich beschweren, aber mit meinem analogen Versuch waren die Gruppenmitglieder auch nicht einverstanden"
%
%Also, creativity suffers: "Die Kreativität blieb meiner Meinung nach in Gruppen eher auf der Strecke. DearData ist ebenso ein Projekt, in dem logisches Denken stark mit Kreativität verknüpft ist, welches in Gruppen spürbar schlechter wurde, da alle andere Denkweisen haben und man sich einigen wollte."
%
%Difference group of two and three four: "Zu zweit ist die Arbeit extrem effizienter, da die Kommunkation einfacher ist und mehr  Ideen umgesetzt werden können in kürzerer Zeit."
%
%Alone or together? Most want to work alone (8) or alone or in group of two (2). Only 3 want teamwork. \textbf{correlation, why these three want teamwork?}.
%
%\textbf{Visualizing alone is better!}

\section{Conclusion and Future Work}


Our teaching experiment focused on introducing basic design thinking principles such as divergent thinking and brainstorming into graphics education by taking the \textit{Dear Data} method as a starting point. As we can see from the students' outcomes, the applied methodology encouraged participants to explore and learn a plethora of visualization techniques and proceed in a solution-oriented matter. The approach reduced the chance of falling into a tunnel-vision pattern that we often experienced in our previous lectures, i.e., the quick and sometimes misleading convergence toward one of the few well-known visualizations.

To assess the benefits and drawbacks of our teaching approach, we shared and discussed the outcomes of interviews and questionnaires from our pilot course. These results summarize our lessons learned regarding visualization novices, their decision making, and their creation process. We suggest to use these findings to further extend the computer graphics and visualization curriculum with the overarching goal to increase the overall visual literacy of our students. 

\section*{Acknowledgments}
This research was made possible in part by the NIH/ NINR - National Institute of Nursing Research Award Number R01NR014852.

% and can be beneficial for education, visualization research, and the development of related software tools.

% The reported implications will be the starting point for our future experiments targeting visualization newcomers. Our major goal is to formalize and refine our guidelines and, thus, to establish a comprehensive framework for assisting visualization apprentices.

%\newpage
%\bibliographystyle{eg-alpha}
\bibliographystyle{eg-alpha-doi}

\bibliography{ddata}

%-------------------------------------------------------------------------


\end{document}
