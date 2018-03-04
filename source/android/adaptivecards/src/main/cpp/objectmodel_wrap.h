/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 3.0.12
 *
 * This file is not intended to be easily readable and contains a number of
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG
 * interface file instead.
 * ----------------------------------------------------------------------------- */

#ifndef SWIG_AdaptiveCardObjectModel_WRAP_H_
#define SWIG_AdaptiveCardObjectModel_WRAP_H_

class SwigDirector_BaseCardElement : public AdaptiveCards::BaseCardElement, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_BaseCardElement(JNIEnv *jenv, AdaptiveCards::CardElementType type, AdaptiveCards::Spacing spacing, bool separator);
    SwigDirector_BaseCardElement(JNIEnv *jenv, AdaptiveCards::CardElementType type);
    virtual ~SwigDirector_BaseCardElement();
    virtual std::string GetElementTypeString() const;
    virtual void SetElementTypeString(std::string const value);
    virtual bool GetSeparator() const;
    virtual void SetSeparator(bool const value);
    virtual AdaptiveCards::Spacing GetSpacing() const;
    virtual void SetSpacing(AdaptiveCards::Spacing const value);
    virtual std::string GetId() const;
    virtual void SetId(std::string const value);
    virtual AdaptiveCards::CardElementType const GetElementType() const;
    virtual Json::Value SerializeToJsonValue();
public:
    bool swig_overrides(int n) {
      return (n < 10 ? swig_override[n] : false);
    }
protected:
    Swig::BoolArray<10> swig_override;
};

class SwigDirector_BaseActionElement : public AdaptiveCards::BaseActionElement, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_BaseActionElement(JNIEnv *jenv, AdaptiveCards::ActionType type);
    virtual ~SwigDirector_BaseActionElement();
    virtual std::string GetElementTypeString() const;
    virtual void SetElementTypeString(std::string const value);
    virtual std::string GetTitle() const;
    virtual void SetTitle(std::string const value);
    virtual std::string GetId() const;
    virtual void SetId(std::string const value);
    virtual AdaptiveCards::ActionType const GetElementType() const;
    virtual Json::Value SerializeToJsonValue();
public:
    bool swig_overrides(int n) {
      return (n < 8 ? swig_override[n] : false);
    }
protected:
    Swig::BoolArray<8> swig_override;
};


#endif
