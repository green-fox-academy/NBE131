#include <iostream>
#include "blogPost.h"

int main()
{
    blogPost First("John Doe", "Lorem Ipsum", "Lorem ipsum dolor sit amet.", {2000, 05, 04});

    std::cout << " The first blogpost, titled '" << First.getTitle() << "', written by " << First.getAuthorName()
              << " on " ;
    for (int i = 0; i < 3; ++i) {
      std::cout  << First.getDate() [i];
      if (i==2) {
          std::cout << "";
      }else {
          std::cout << ".";
      }

    }

    std::cout << ": " << std::endl << "'"<< First.getText() << "'" << std::endl  << std::endl;


    blogPost Second("Tim Urban", "Wait but why",
                    "A popular long-form, stick-figure-illustrated blog about almost everything.", {2010, 10, 10});
    std::cout << " The second blogpost, titled '" << Second.getTitle() << "', written by " << Second.getAuthorName()
              << " on " ;
    for (int i = 0; i < 3; ++i) {
        std::cout  << Second.getDate() [i];
        if (i==2) {
            std::cout << "";
        }else {
            std::cout << ".";
        }

    }

    std::cout << ": " << std::endl << "'" << Second.getText() << "'" << std::endl << std::endl;


    blogPost Third("William Turton", "One Engineer Is Trying to Get IBM to Reckon With Trump",
                   "Daniel Hanley, a cybersecurity engineer at IBM, doesn't want to be the center of attention. When I asked to take his picture outside one of IBM's New York City offices, he told me that he wasn’t really into the whole organizer profile thing.",
                   {2017, 03, 28});


    std::cout << " The third blogpost, titled '" << Third.getTitle() << "', written by " << Third.getAuthorName()
              << " on " ;
    for (int i = 0; i < 3; ++i) {
        std::cout  << Third.getDate() [i];
        if (i==2) {
            std::cout << "";
        }else {
            std::cout << ".";
        }

    }

    std::cout << ": " << std::endl << "'" << Third.getText() << "'" << std::endl << std::endl;


    return 0;
}