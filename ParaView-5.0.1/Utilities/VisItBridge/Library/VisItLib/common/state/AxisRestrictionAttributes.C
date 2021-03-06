/*****************************************************************************
*
* Copyright (c) 2000 - 2013, Lawrence Livermore National Security, LLC
* Produced at the Lawrence Livermore National Laboratory
* LLNL-CODE-442911
* All rights reserved.
*
* This file is  part of VisIt. For  details, see https://visit.llnl.gov/.  The
* full copyright notice is contained in the file COPYRIGHT located at the root
* of the VisIt distribution or at http://www.llnl.gov/visit/copyright.html.
*
* Redistribution  and  use  in  source  and  binary  forms,  with  or  without
* modification, are permitted provided that the following conditions are met:
*
*  - Redistributions of  source code must  retain the above  copyright notice,
*    this list of conditions and the disclaimer below.
*  - Redistributions in binary form must reproduce the above copyright notice,
*    this  list of  conditions  and  the  disclaimer (as noted below)  in  the
*    documentation and/or other materials provided with the distribution.
*  - Neither the name of  the LLNS/LLNL nor the names of  its contributors may
*    be used to endorse or promote products derived from this software without
*    specific prior written permission.
*
* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT  HOLDERS AND CONTRIBUTORS "AS IS"
* AND ANY EXPRESS OR  IMPLIED WARRANTIES, INCLUDING,  BUT NOT  LIMITED TO, THE
* IMPLIED WARRANTIES OF MERCHANTABILITY AND  FITNESS FOR A PARTICULAR  PURPOSE
* ARE  DISCLAIMED. IN  NO EVENT  SHALL LAWRENCE  LIVERMORE NATIONAL  SECURITY,
* LLC, THE  U.S.  DEPARTMENT OF  ENERGY  OR  CONTRIBUTORS BE  LIABLE  FOR  ANY
* DIRECT,  INDIRECT,   INCIDENTAL,   SPECIAL,   EXEMPLARY,  OR   CONSEQUENTIAL
* DAMAGES (INCLUDING, BUT NOT  LIMITED TO, PROCUREMENT OF  SUBSTITUTE GOODS OR
* SERVICES; LOSS OF  USE, DATA, OR PROFITS; OR  BUSINESS INTERRUPTION) HOWEVER
* CAUSED  AND  ON  ANY  THEORY  OF  LIABILITY,  WHETHER  IN  CONTRACT,  STRICT
* LIABILITY, OR TORT  (INCLUDING NEGLIGENCE OR OTHERWISE)  ARISING IN ANY  WAY
* OUT OF THE  USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH
* DAMAGE.
*
*****************************************************************************/

#include <AxisRestrictionAttributes.h>
#include <DataNode.h>

// ****************************************************************************
// Method: AxisRestrictionAttributes::AxisRestrictionAttributes
//
// Purpose: 
//   Init utility for the AxisRestrictionAttributes class.
//
// Note:       Autogenerated by xml2atts.
//
// Programmer: xml2atts
// Creation:   omitted
//
// Modifications:
//   
// ****************************************************************************

void AxisRestrictionAttributes::Init()
{

    AxisRestrictionAttributes::SelectAll();
}

// ****************************************************************************
// Method: AxisRestrictionAttributes::AxisRestrictionAttributes
//
// Purpose: 
//   Copy utility for the AxisRestrictionAttributes class.
//
// Note:       Autogenerated by xml2atts.
//
// Programmer: xml2atts
// Creation:   omitted
//
// Modifications:
//   
// ****************************************************************************

void AxisRestrictionAttributes::Copy(const AxisRestrictionAttributes &obj)
{
    names = obj.names;
    minima = obj.minima;
    maxima = obj.maxima;

    AxisRestrictionAttributes::SelectAll();
}

// Type map format string
const char *AxisRestrictionAttributes::TypeMapFormatString = AXISRESTRICTIONATTRIBUTES_TMFS;
const AttributeGroup::private_tmfs_t AxisRestrictionAttributes::TmfsStruct = {AXISRESTRICTIONATTRIBUTES_TMFS};


// ****************************************************************************
// Method: AxisRestrictionAttributes::AxisRestrictionAttributes
//
// Purpose: 
//   Default constructor for the AxisRestrictionAttributes class.
//
// Note:       Autogenerated by xml2atts.
//
// Programmer: xml2atts
// Creation:   omitted
//
// Modifications:
//   
// ****************************************************************************

AxisRestrictionAttributes::AxisRestrictionAttributes() : 
    AttributeSubject(AxisRestrictionAttributes::TypeMapFormatString)
{
    AxisRestrictionAttributes::Init();
}

// ****************************************************************************
// Method: AxisRestrictionAttributes::AxisRestrictionAttributes
//
// Purpose: 
//   Constructor for the derived classes of AxisRestrictionAttributes class.
//
// Note:       Autogenerated by xml2atts.
//
// Programmer: xml2atts
// Creation:   omitted
//
// Modifications:
//   
// ****************************************************************************

AxisRestrictionAttributes::AxisRestrictionAttributes(private_tmfs_t tmfs) : 
    AttributeSubject(tmfs.tmfs)
{
    AxisRestrictionAttributes::Init();
}

// ****************************************************************************
// Method: AxisRestrictionAttributes::AxisRestrictionAttributes
//
// Purpose: 
//   Copy constructor for the AxisRestrictionAttributes class.
//
// Note:       Autogenerated by xml2atts.
//
// Programmer: xml2atts
// Creation:   omitted
//
// Modifications:
//   
// ****************************************************************************

AxisRestrictionAttributes::AxisRestrictionAttributes(const AxisRestrictionAttributes &obj) : 
    AttributeSubject(AxisRestrictionAttributes::TypeMapFormatString)
{
    AxisRestrictionAttributes::Copy(obj);
}

// ****************************************************************************
// Method: AxisRestrictionAttributes::AxisRestrictionAttributes
//
// Purpose: 
//   Copy constructor for derived classes of the AxisRestrictionAttributes class.
//
// Note:       Autogenerated by xml2atts.
//
// Programmer: xml2atts
// Creation:   omitted
//
// Modifications:
//   
// ****************************************************************************

AxisRestrictionAttributes::AxisRestrictionAttributes(const AxisRestrictionAttributes &obj, private_tmfs_t tmfs) : 
    AttributeSubject(tmfs.tmfs)
{
    AxisRestrictionAttributes::Copy(obj);
}

// ****************************************************************************
// Method: AxisRestrictionAttributes::~AxisRestrictionAttributes
//
// Purpose: 
//   Destructor for the AxisRestrictionAttributes class.
//
// Note:       Autogenerated by xml2atts.
//
// Programmer: xml2atts
// Creation:   omitted
//
// Modifications:
//   
// ****************************************************************************

AxisRestrictionAttributes::~AxisRestrictionAttributes()
{
    // nothing here
}

// ****************************************************************************
// Method: AxisRestrictionAttributes::operator = 
//
// Purpose: 
//   Assignment operator for the AxisRestrictionAttributes class.
//
// Note:       Autogenerated by xml2atts.
//
// Programmer: xml2atts
// Creation:   omitted
//
// Modifications:
//   
// ****************************************************************************

AxisRestrictionAttributes& 
AxisRestrictionAttributes::operator = (const AxisRestrictionAttributes &obj)
{
    if (this == &obj) return *this;

    AxisRestrictionAttributes::Copy(obj);

    return *this;
}

// ****************************************************************************
// Method: AxisRestrictionAttributes::operator == 
//
// Purpose: 
//   Comparison operator == for the AxisRestrictionAttributes class.
//
// Note:       Autogenerated by xml2atts.
//
// Programmer: xml2atts
// Creation:   omitted
//
// Modifications:
//   
// ****************************************************************************

bool
AxisRestrictionAttributes::operator == (const AxisRestrictionAttributes &obj) const
{
    // Create the return value
    return ((names == obj.names) &&
            (minima == obj.minima) &&
            (maxima == obj.maxima));
}

// ****************************************************************************
// Method: AxisRestrictionAttributes::operator != 
//
// Purpose: 
//   Comparison operator != for the AxisRestrictionAttributes class.
//
// Note:       Autogenerated by xml2atts.
//
// Programmer: xml2atts
// Creation:   omitted
//
// Modifications:
//   
// ****************************************************************************

bool
AxisRestrictionAttributes::operator != (const AxisRestrictionAttributes &obj) const
{
    return !(this->operator == (obj));
}

// ****************************************************************************
// Method: AxisRestrictionAttributes::TypeName
//
// Purpose: 
//   Type name method for the AxisRestrictionAttributes class.
//
// Note:       Autogenerated by xml2atts.
//
// Programmer: xml2atts
// Creation:   omitted
//
// Modifications:
//   
// ****************************************************************************

const std::string
AxisRestrictionAttributes::TypeName() const
{
    return "AxisRestrictionAttributes";
}

// ****************************************************************************
// Method: AxisRestrictionAttributes::CopyAttributes
//
// Purpose: 
//   CopyAttributes method for the AxisRestrictionAttributes class.
//
// Note:       Autogenerated by xml2atts.
//
// Programmer: xml2atts
// Creation:   omitted
//
// Modifications:
//   
// ****************************************************************************

bool
AxisRestrictionAttributes::CopyAttributes(const AttributeGroup *atts)
{
    if(TypeName() != atts->TypeName())
        return false;

    // Call assignment operator.
    const AxisRestrictionAttributes *tmp = (const AxisRestrictionAttributes *)atts;
    *this = *tmp;

    return true;
}

// ****************************************************************************
// Method: AxisRestrictionAttributes::CreateCompatible
//
// Purpose: 
//   CreateCompatible method for the AxisRestrictionAttributes class.
//
// Note:       Autogenerated by xml2atts.
//
// Programmer: xml2atts
// Creation:   omitted
//
// Modifications:
//   
// ****************************************************************************

AttributeSubject *
AxisRestrictionAttributes::CreateCompatible(const std::string &tname) const
{
    AttributeSubject *retval = 0;
    if(TypeName() == tname)
        retval = new AxisRestrictionAttributes(*this);
    // Other cases could go here too. 

    return retval;
}

// ****************************************************************************
// Method: AxisRestrictionAttributes::NewInstance
//
// Purpose: 
//   NewInstance method for the AxisRestrictionAttributes class.
//
// Note:       Autogenerated by xml2atts.
//
// Programmer: xml2atts
// Creation:   omitted
//
// Modifications:
//   
// ****************************************************************************

AttributeSubject *
AxisRestrictionAttributes::NewInstance(bool copy) const
{
    AttributeSubject *retval = 0;
    if(copy)
        retval = new AxisRestrictionAttributes(*this);
    else
        retval = new AxisRestrictionAttributes;

    return retval;
}

// ****************************************************************************
// Method: AxisRestrictionAttributes::SelectAll
//
// Purpose: 
//   Selects all attributes.
//
// Note:       Autogenerated by xml2atts.
//
// Programmer: xml2atts
// Creation:   omitted
//
// Modifications:
//   
// ****************************************************************************

void
AxisRestrictionAttributes::SelectAll()
{
    Select(ID_names,  (void *)&names);
    Select(ID_minima, (void *)&minima);
    Select(ID_maxima, (void *)&maxima);
}

///////////////////////////////////////////////////////////////////////////////
// Persistence methods
///////////////////////////////////////////////////////////////////////////////

// ****************************************************************************
// Method: AxisRestrictionAttributes::CreateNode
//
// Purpose: 
//   This method creates a DataNode representation of the object so it can be saved to a config file.
//
// Note:       Autogenerated by xml2atts.
//
// Programmer: xml2atts
// Creation:   omitted
//
// Modifications:
//   
// ****************************************************************************

bool
AxisRestrictionAttributes::CreateNode(DataNode *parentNode, bool completeSave, bool forceAdd)
{
    if(parentNode == 0)
        return false;

    AxisRestrictionAttributes defaultObject;
    bool addToParent = false;
    // Create a node for AxisRestrictionAttributes.
    DataNode *node = new DataNode("AxisRestrictionAttributes");

    if(completeSave || !FieldsEqual(ID_names, &defaultObject))
    {
        addToParent = true;
        node->AddNode(new DataNode("names", names));
    }

    if(completeSave || !FieldsEqual(ID_minima, &defaultObject))
    {
        addToParent = true;
        node->AddNode(new DataNode("minima", minima));
    }

    if(completeSave || !FieldsEqual(ID_maxima, &defaultObject))
    {
        addToParent = true;
        node->AddNode(new DataNode("maxima", maxima));
    }


    // Add the node to the parent node.
    if(addToParent || forceAdd)
        parentNode->AddNode(node);
    else
        delete node;

    return (addToParent || forceAdd);
}

// ****************************************************************************
// Method: AxisRestrictionAttributes::SetFromNode
//
// Purpose: 
//   This method sets attributes in this object from values in a DataNode representation of the object.
//
// Note:       Autogenerated by xml2atts.
//
// Programmer: xml2atts
// Creation:   omitted
//
// Modifications:
//   
// ****************************************************************************

void
AxisRestrictionAttributes::SetFromNode(DataNode *parentNode)
{
    if(parentNode == 0)
        return;

    DataNode *searchNode = parentNode->GetNode("AxisRestrictionAttributes");
    if(searchNode == 0)
        return;

    DataNode *node;
    if((node = searchNode->GetNode("names")) != 0)
        SetNames(node->AsStringVector());
    if((node = searchNode->GetNode("minima")) != 0)
        SetMinima(node->AsDoubleVector());
    if((node = searchNode->GetNode("maxima")) != 0)
        SetMaxima(node->AsDoubleVector());
}

///////////////////////////////////////////////////////////////////////////////
// Set property methods
///////////////////////////////////////////////////////////////////////////////

void
AxisRestrictionAttributes::SetNames(const stringVector &names_)
{
    names = names_;
    Select(ID_names, (void *)&names);
}

void
AxisRestrictionAttributes::SetMinima(const doubleVector &minima_)
{
    minima = minima_;
    Select(ID_minima, (void *)&minima);
}

void
AxisRestrictionAttributes::SetMaxima(const doubleVector &maxima_)
{
    maxima = maxima_;
    Select(ID_maxima, (void *)&maxima);
}

///////////////////////////////////////////////////////////////////////////////
// Get property methods
///////////////////////////////////////////////////////////////////////////////

const stringVector &
AxisRestrictionAttributes::GetNames() const
{
    return names;
}

stringVector &
AxisRestrictionAttributes::GetNames()
{
    return names;
}

const doubleVector &
AxisRestrictionAttributes::GetMinima() const
{
    return minima;
}

doubleVector &
AxisRestrictionAttributes::GetMinima()
{
    return minima;
}

const doubleVector &
AxisRestrictionAttributes::GetMaxima() const
{
    return maxima;
}

doubleVector &
AxisRestrictionAttributes::GetMaxima()
{
    return maxima;
}

///////////////////////////////////////////////////////////////////////////////
// Select property methods
///////////////////////////////////////////////////////////////////////////////

void
AxisRestrictionAttributes::SelectNames()
{
    Select(ID_names, (void *)&names);
}

void
AxisRestrictionAttributes::SelectMinima()
{
    Select(ID_minima, (void *)&minima);
}

void
AxisRestrictionAttributes::SelectMaxima()
{
    Select(ID_maxima, (void *)&maxima);
}

///////////////////////////////////////////////////////////////////////////////
// Keyframing methods
///////////////////////////////////////////////////////////////////////////////

// ****************************************************************************
// Method: AxisRestrictionAttributes::GetFieldName
//
// Purpose: 
//   This method returns the name of a field given its index.
//
// Note:       Autogenerated by xml2atts.
//
// Programmer: xml2atts
// Creation:   omitted
//
// Modifications:
//   
// ****************************************************************************

std::string
AxisRestrictionAttributes::GetFieldName(int index) const
{
    switch (index)
    {
    case ID_names:  return "names";
    case ID_minima: return "minima";
    case ID_maxima: return "maxima";
    default:  return "invalid index";
    }
}

// ****************************************************************************
// Method: AxisRestrictionAttributes::GetFieldType
//
// Purpose: 
//   This method returns the type of a field given its index.
//
// Note:       Autogenerated by xml2atts.
//
// Programmer: xml2atts
// Creation:   omitted
//
// Modifications:
//   
// ****************************************************************************

AttributeGroup::FieldType
AxisRestrictionAttributes::GetFieldType(int index) const
{
    switch (index)
    {
    case ID_names:  return FieldType_stringVector;
    case ID_minima: return FieldType_doubleVector;
    case ID_maxima: return FieldType_doubleVector;
    default:  return FieldType_unknown;
    }
}

// ****************************************************************************
// Method: AxisRestrictionAttributes::GetFieldTypeName
//
// Purpose: 
//   This method returns the name of a field type given its index.
//
// Note:       Autogenerated by xml2atts.
//
// Programmer: xml2atts
// Creation:   omitted
//
// Modifications:
//   
// ****************************************************************************

std::string
AxisRestrictionAttributes::GetFieldTypeName(int index) const
{
    switch (index)
    {
    case ID_names:  return "stringVector";
    case ID_minima: return "doubleVector";
    case ID_maxima: return "doubleVector";
    default:  return "invalid index";
    }
}

// ****************************************************************************
// Method: AxisRestrictionAttributes::FieldsEqual
//
// Purpose: 
//   This method compares two fields and return true if they are equal.
//
// Note:       Autogenerated by xml2atts.
//
// Programmer: xml2atts
// Creation:   omitted
//
// Modifications:
//   
// ****************************************************************************

bool
AxisRestrictionAttributes::FieldsEqual(int index_, const AttributeGroup *rhs) const
{
    const AxisRestrictionAttributes &obj = *((const AxisRestrictionAttributes*)rhs);
    bool retval = false;
    switch (index_)
    {
    case ID_names:
        {  // new scope
        retval = (names == obj.names);
        }
        break;
    case ID_minima:
        {  // new scope
        retval = (minima == obj.minima);
        }
        break;
    case ID_maxima:
        {  // new scope
        retval = (maxima == obj.maxima);
        }
        break;
    default: retval = false;
    }

    return retval;
}

///////////////////////////////////////////////////////////////////////////////
// User-defined methods.
///////////////////////////////////////////////////////////////////////////////

