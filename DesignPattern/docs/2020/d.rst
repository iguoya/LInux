春季
========

ssssssss  

.. uml:: 
   
   @startuml
   user -> (use PlantUML)

   note left of user
      Hello!   
   end note
   @enduml

.. graphviz::

   digraph Flatland {
   
      a -> b -> c -> g; 
      a  [shape=polygon,sides=4]
      b  [shape=polygon,sides=5]
      c  [shape=polygon,sides=6]
   
      g [peripheries=3,color=yellow];
      s [shape=invtriangle,peripheries=1,color=red,style=filled];
      w  [shape=triangle,peripheries=1,color=blue,style=filled];
      
      }

春眠不觉晓，处处闻啼鸟。

.. graphviz::

   digraph finite_state_machine {
      rankdir=LR;
      size="8,5"

      node [shape = doublecircle]; S;
      node [shape = point ]; qi

      node [shape = circle];
      qi -> S;
      S  -> q1 [ label = "a" ];
      S  -> S  [ label = "a" ];
      q1 -> S  [ label = "a" ];
      q1 -> q2 [ label = "ddb" ];
      q2 -> q1 [ label = "b" ];
      q2 -> q2 [ label = "b" ];
   }


.. uml:: 

   @startuml
   '!include ../../plantuml-styles/plantuml-ae.iuml

   skinparam Shadowing false

   skinparam ArrowFontStyle normal
   skinparam ArrowFontName Courier
   skinparam ArrowFontSize 10

   title Arrows in Use Case diagrams\n


   (Manage Users) -up-|> (Management): This arrow is -up-|>

   :All Users:      as allUsers #violet
   :Main Admin:     as Admin    #saddleBrown
   :User:           as U        #tan
   :System Manager: as manager

   Admin   -up-|>    allUsers: This arrow is -up->
   manager -right-|> allUsers: This arrow is -right-|>
   U       -|>       allUsers: This arrow is -|>

   Admin --> U:    This arrow is -->
   Admin <.....> U: This arrow is <.....>

   Admin   -[#blue]->    (Manage Users): This arrow is -[#blue]->
   manager -[#blue]->> (Manage Users): This arrow is -[#blue]->>


   '!include ../../plantuml-styles/ae-copyright-footer.txt
   @enduml



.. uml:: 

   @startuml
      skinparam backgroundColor #EEEBDC
      skinparam handwritten true
      actor Customer
      Customer -> "login()" : username & password
      "login()" -> Customer : session token
      activate "login()"
      Customer -> "placeOrder()" : session token, order info
      "placeOrder()" -> Customer : ok
      Customer -> "logout()"
      "logout()" -> Customer : ok
      deactivate "login()"
   @enduml






.. uml::

   @startuml
   package "customer domain" #DDDDDD {
      class Contact {
         + email
         + phone
      }

      class Address {
         + address1
         + address2
         + city
         + region
         + country
         + postalCode
         + organization
      }

      note right of Address 
         There are two types of 
         addresses: billing and shipping
      end note

      class Customer {
      }

      Customer *-- Contact
      Customer *-- ShippingAddress
      Customer *-- BillingAddress
      Customer *--{ SalesOrder

      class ShippingAddress <<Address>>
      class BillingAddress <<Address>>
      class SalesOrder {
         + itemDescription
         + itemPrice
         + shippingCost
         + trackingNumber
         + shipDate
      }
   }
   @enduml



.. uml::

   @startuml
   scale 600 width
   skinparam backgroundColor #FFEBDC
   [*] -> Begin
   Begin -right-> Running : Succeeded
   Begin --> [*] : Aborted
   state Running {
   state "The game runneth" as long1
   long1 : Until you die
   long1 --> long1 : User interaction
   long1 --> keepGoing : stillAlive
   keepGoing --> long1
   long1 --> tooBadsoSad : killed
   tooBadsoSad --> Dead : failed
   }
   Dead --> [*] : Aborted
   @enduml
