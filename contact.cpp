//
//  contact.cpp
//  CS331_HW03
//
//  Created by yongqiang chen on 10/30/19.
//  Copyright © 2019 yongqiang chen. All rights reserved.
//

#include "contact.h"

Contact::Contact()
{

}

QString Contact::toString(){
    QString s;
    s="Category:" +QString::number(this->category)+"\t"+ this->firstName+"\t"+ this->lastName+"\t" +this->street+"\t" +this->city+"\t" +this->zipCode+"\t" +this->phoneNumber;
    return s;
}
