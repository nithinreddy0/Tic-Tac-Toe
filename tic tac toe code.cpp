# Description: This is a chat bot program
#import the library
from nltk.chat.util import Chat, reflections
pairs = [
 ['my name is (.*)', ['hello %1 i am chatbot , how can i help you']],
 ['(What is the novel coronavirus?)', ['COVID19 is a respiratory disease that affects your breathing and spreads from p
erson-toperson contact. How it affects each person varies from mild to severe illn
ess or death. Currently, there is no vaccine or treatment for COVID19. The majority of individuals who get COVID19 experience mild illness that can be monitored at home. Individuals who
experience severe illness need to be hospitalized']],
 ['(where was the covid 19 first identified?)', ['it was first found
in Wuhan, China, in December 2019.']],
 ['(Where did the coronavirus disease originate?)',['On 31 December 2
019, the World Health Organization ( WHO ) was informed of a cluster of ca
ses of pneumonia of unknown cause detected in Wuhan City, Hubei Province,
China.']],
 ['(What causes covid 19?)',['covid 19 is caused by infection with th
e severe acute respiratory syndrome coronavirus 2 (SARS-CoV2) virus strain']],
 ['(Is covid 19 caused by a virus or a bacteria?)',['The coronavirus
disease (COVID-19) is caused by a virus, NOT by bacteria.']],
 ['(Can you get covid 19 after vaccine?)',['If you have been vaccinat
ed with a COVID-19 vaccine, you are less likely to catch COVID19, and to become severely ill if you do catch it. You are also less likel
y to spread COVID19 to other people, but it is still possible for this to happen.']],
]
chat = Chat(pairs, reflections)
chat.converse(