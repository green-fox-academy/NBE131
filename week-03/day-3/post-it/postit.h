//
// Created by Dell on 2019. 07. 10..
//

#ifndef POST_IT_POSTIT_H
#define POST_IT_POSTIT_H

#include <vector>
#include <string>


class postit
{


public:
    postit(const std::string &text, const std::vector<int> &backgroundColorRGB, const std::vector<int> &textColorRGB);


    std::string getText() const;

    std::vector<int> getBackgroundColorRGB() const;

    std::vector<int> getTextColorRGB() const;

private:

    std::string _text;
    std::vector<int> _backgroundColorRGB;
    std::vector<int> _textColorRGB;

};


#endif //POST_IT_POSTIT_H
