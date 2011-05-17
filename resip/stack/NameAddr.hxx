#if !defined(RESIP_NAME_ADDR_HXX)
#define RESIP_NAME_ADDR_HXX

#include <iosfwd>
#include "rutil/Data.hxx"
#include "resip/stack/ParserCategory.hxx"
#include "resip/stack/ParserContainer.hxx"
#include "resip/stack/Uri.hxx"

namespace resip
{

/**
   @ingroup sip_grammar
   @brief Represents the "name-addr" and the "addr-spec" elements in the RFC 
      3261 grammar.
*/
class NameAddr : public ParserCategory
{
   public:
      enum {commaHandling = CommasAllowedOutputMulti};

      NameAddr();
      NameAddr(HeaderFieldValue* hfv, Headers::Type type);
      explicit NameAddr(const Uri&);
      explicit NameAddr(const Data& unparsed, bool preCacheAor=false);

      NameAddr(const NameAddr&);
      NameAddr& operator=(const NameAddr&);
      bool operator==(const NameAddr& other) const;

      virtual ~NameAddr();
      
      Uri& uri();
      const Uri& uri() const;
      Data& displayName();
      const Data& displayName() const;
      bool isAllContacts() const;
      void setAllContacts();
      
      virtual void parse(ParseBuffer& pb);
      virtual ParserCategory* clone() const;
      virtual EncodeStream& encodeParsed(EncodeStream& str) const;

      bool operator<(const NameAddr& other) const;

      bool mustQuoteDisplayName() const;      

      // Inform the compiler that overloads of these may be found in
      // ParserCategory, too.
      using ParserCategory::exists;
      using ParserCategory::remove;
      using ParserCategory::param;

      virtual Parameter* createParam(ParameterTypes::Type type, ParseBuffer& pb, const char* terminators);
      bool exists(const Param<NameAddr>& paramType) const;
      void remove(const Param<NameAddr>& paramType);

// BEGIN AUTOGENERATED

      /**
         Returns a reference to the value of the 'data' parameter
         on this NameAddr.
         @code header(p_data) @endcode
      */
      ExistsParameter::Type& param(const data_Param& paramType);

      /**
         Returns a const reference to the value of the 'data' parameter 
         on this NameAddr.
         @code header(p_data) @endcode
         @throws A ParserCategory::Exception if the parameter does not exist.
      */
      const ExistsParameter::Type& param(const data_Param& paramType) const;

      // Allow the accessor token to register itself in ParameterFactories
      friend class data_Param;


      /**
         Returns a reference to the value of the 'control' parameter
         on this NameAddr.
         @code header(p_control) @endcode
      */
      ExistsParameter::Type& param(const control_Param& paramType);

      /**
         Returns a const reference to the value of the 'control' parameter 
         on this NameAddr.
         @code header(p_control) @endcode
         @throws A ParserCategory::Exception if the parameter does not exist.
      */
      const ExistsParameter::Type& param(const control_Param& paramType) const;

      // Allow the accessor token to register itself in ParameterFactories
      friend class control_Param;


      /**
         Returns a reference to the value of the 'mobility' parameter
         on this NameAddr.
         @code header(p_mobility) @endcode
      */
      QuotedDataParameter::Type& param(const mobility_Param& paramType);

      /**
         Returns a const reference to the value of the 'mobility' parameter 
         on this NameAddr.
         @code header(p_mobility) @endcode
         @throws A ParserCategory::Exception if the parameter does not exist.
      */
      const QuotedDataParameter::Type& param(const mobility_Param& paramType) const;

      // Allow the accessor token to register itself in ParameterFactories
      friend class mobility_Param;


      /**
         Returns a reference to the value of the 'description' parameter
         on this NameAddr.
         @code header(p_description) @endcode
      */
      QuotedDataParameter::Type& param(const description_Param& paramType);

      /**
         Returns a const reference to the value of the 'description' parameter 
         on this NameAddr.
         @code header(p_description) @endcode
         @throws A ParserCategory::Exception if the parameter does not exist.
      */
      const QuotedDataParameter::Type& param(const description_Param& paramType) const;

      // Allow the accessor token to register itself in ParameterFactories
      friend class description_Param;


      /**
         Returns a reference to the value of the 'events' parameter
         on this NameAddr.
         @code header(p_events) @endcode
      */
      QuotedDataParameter::Type& param(const events_Param& paramType);

      /**
         Returns a const reference to the value of the 'events' parameter 
         on this NameAddr.
         @code header(p_events) @endcode
         @throws A ParserCategory::Exception if the parameter does not exist.
      */
      const QuotedDataParameter::Type& param(const events_Param& paramType) const;

      // Allow the accessor token to register itself in ParameterFactories
      friend class events_Param;


      /**
         Returns a reference to the value of the 'priority' parameter
         on this NameAddr.
         @code header(p_priority) @endcode
      */
      QuotedDataParameter::Type& param(const priority_Param& paramType);

      /**
         Returns a const reference to the value of the 'priority' parameter 
         on this NameAddr.
         @code header(p_priority) @endcode
         @throws A ParserCategory::Exception if the parameter does not exist.
      */
      const QuotedDataParameter::Type& param(const priority_Param& paramType) const;

      // Allow the accessor token to register itself in ParameterFactories
      friend class priority_Param;


      /**
         Returns a reference to the value of the 'methods' parameter
         on this NameAddr.
         @code header(p_methods) @endcode
      */
      QuotedDataParameter::Type& param(const methods_Param& paramType);

      /**
         Returns a const reference to the value of the 'methods' parameter 
         on this NameAddr.
         @code header(p_methods) @endcode
         @throws A ParserCategory::Exception if the parameter does not exist.
      */
      const QuotedDataParameter::Type& param(const methods_Param& paramType) const;

      // Allow the accessor token to register itself in ParameterFactories
      friend class methods_Param;


      /**
         Returns a reference to the value of the 'schemes' parameter
         on this NameAddr.
         @code header(p_schemes) @endcode
      */
      QuotedDataParameter::Type& param(const schemes_Param& paramType);

      /**
         Returns a const reference to the value of the 'schemes' parameter 
         on this NameAddr.
         @code header(p_schemes) @endcode
         @throws A ParserCategory::Exception if the parameter does not exist.
      */
      const QuotedDataParameter::Type& param(const schemes_Param& paramType) const;

      // Allow the accessor token to register itself in ParameterFactories
      friend class schemes_Param;


      /**
         Returns a reference to the value of the 'application' parameter
         on this NameAddr.
         @code header(p_application) @endcode
      */
      ExistsParameter::Type& param(const application_Param& paramType);

      /**
         Returns a const reference to the value of the 'application' parameter 
         on this NameAddr.
         @code header(p_application) @endcode
         @throws A ParserCategory::Exception if the parameter does not exist.
      */
      const ExistsParameter::Type& param(const application_Param& paramType) const;

      // Allow the accessor token to register itself in ParameterFactories
      friend class application_Param;


      /**
         Returns a reference to the value of the 'video' parameter
         on this NameAddr.
         @code header(p_video) @endcode
      */
      ExistsParameter::Type& param(const video_Param& paramType);

      /**
         Returns a const reference to the value of the 'video' parameter 
         on this NameAddr.
         @code header(p_video) @endcode
         @throws A ParserCategory::Exception if the parameter does not exist.
      */
      const ExistsParameter::Type& param(const video_Param& paramType) const;

      // Allow the accessor token to register itself in ParameterFactories
      friend class video_Param;


      /**
         Returns a reference to the value of the 'language' parameter
         on this NameAddr.
         @code header(p_language) @endcode
      */
      QuotedDataParameter::Type& param(const language_Param& paramType);

      /**
         Returns a const reference to the value of the 'language' parameter 
         on this NameAddr.
         @code header(p_language) @endcode
         @throws A ParserCategory::Exception if the parameter does not exist.
      */
      const QuotedDataParameter::Type& param(const language_Param& paramType) const;

      // Allow the accessor token to register itself in ParameterFactories
      friend class language_Param;


      /**
         Returns a reference to the value of the 'type' parameter
         on this NameAddr.
         @code header(p_type) @endcode
      */
      QuotedDataParameter::Type& param(const type_Param& paramType);

      /**
         Returns a const reference to the value of the 'type' parameter 
         on this NameAddr.
         @code header(p_type) @endcode
         @throws A ParserCategory::Exception if the parameter does not exist.
      */
      const QuotedDataParameter::Type& param(const type_Param& paramType) const;

      // Allow the accessor token to register itself in ParameterFactories
      friend class type_Param;


      /**
         Returns a reference to the value of the 'isfocus' parameter
         on this NameAddr.
         @code header(p_isFocus) @endcode
      */
      ExistsParameter::Type& param(const isFocus_Param& paramType);

      /**
         Returns a const reference to the value of the 'isfocus' parameter 
         on this NameAddr.
         @code header(p_isFocus) @endcode
         @throws A ParserCategory::Exception if the parameter does not exist.
      */
      const ExistsParameter::Type& param(const isFocus_Param& paramType) const;

      // Allow the accessor token to register itself in ParameterFactories
      friend class isFocus_Param;


      /**
         Returns a reference to the value of the 'actor' parameter
         on this NameAddr.
         @code header(p_actor) @endcode
      */
      QuotedDataParameter::Type& param(const actor_Param& paramType);

      /**
         Returns a const reference to the value of the 'actor' parameter 
         on this NameAddr.
         @code header(p_actor) @endcode
         @throws A ParserCategory::Exception if the parameter does not exist.
      */
      const QuotedDataParameter::Type& param(const actor_Param& paramType) const;

      // Allow the accessor token to register itself in ParameterFactories
      friend class actor_Param;


      /**
         Returns a reference to the value of the 'text' parameter
         on this NameAddr.
         @code header(p_text) @endcode
      */
      ExistsOrDataParameter::Type& param(const text_Param& paramType);

      /**
         Returns a const reference to the value of the 'text' parameter 
         on this NameAddr.
         @code header(p_text) @endcode
         @throws A ParserCategory::Exception if the parameter does not exist.
      */
      const ExistsOrDataParameter::Type& param(const text_Param& paramType) const;

      // Allow the accessor token to register itself in ParameterFactories
      friend class text_Param;


      /**
         Returns a reference to the value of the 'extensions' parameter
         on this NameAddr.
         @code header(p_extensions) @endcode
      */
      QuotedDataParameter::Type& param(const extensions_Param& paramType);

      /**
         Returns a const reference to the value of the 'extensions' parameter 
         on this NameAddr.
         @code header(p_extensions) @endcode
         @throws A ParserCategory::Exception if the parameter does not exist.
      */
      const QuotedDataParameter::Type& param(const extensions_Param& paramType) const;

      // Allow the accessor token to register itself in ParameterFactories
      friend class extensions_Param;


      /**
         Returns a reference to the value of the '+sip.instance' parameter
         on this NameAddr.
         @code header(p_Instance) @endcode
      */
      QuotedDataParameter::Type& param(const Instance_Param& paramType);

      /**
         Returns a const reference to the value of the '+sip.instance' parameter 
         on this NameAddr.
         @code header(p_Instance) @endcode
         @throws A ParserCategory::Exception if the parameter does not exist.
      */
      const QuotedDataParameter::Type& param(const Instance_Param& paramType) const;

      // Allow the accessor token to register itself in ParameterFactories
      friend class Instance_Param;


      /**
         Returns a reference to the value of the 'reg-id' parameter
         on this NameAddr.
         @code header(p_regid) @endcode
      */
      UInt32Parameter::Type& param(const regid_Param& paramType);

      /**
         Returns a const reference to the value of the 'reg-id' parameter 
         on this NameAddr.
         @code header(p_regid) @endcode
         @throws A ParserCategory::Exception if the parameter does not exist.
      */
      const UInt32Parameter::Type& param(const regid_Param& paramType) const;

      // Allow the accessor token to register itself in ParameterFactories
      friend class regid_Param;


      /**
         Returns a reference to the value of the 'pub-gruu' parameter
         on this NameAddr.
         @code header(p_pubGruu) @endcode
      */
      QuotedDataParameter::Type& param(const pubGruu_Param& paramType);

      /**
         Returns a const reference to the value of the 'pub-gruu' parameter 
         on this NameAddr.
         @code header(p_pubGruu) @endcode
         @throws A ParserCategory::Exception if the parameter does not exist.
      */
      const QuotedDataParameter::Type& param(const pubGruu_Param& paramType) const;

      // Allow the accessor token to register itself in ParameterFactories
      friend class pubGruu_Param;


      /**
         Returns a reference to the value of the 'temp-gruu' parameter
         on this NameAddr.
         @code header(p_tempGruu) @endcode
      */
      QuotedDataParameter::Type& param(const tempGruu_Param& paramType);

      /**
         Returns a const reference to the value of the 'temp-gruu' parameter 
         on this NameAddr.
         @code header(p_tempGruu) @endcode
         @throws A ParserCategory::Exception if the parameter does not exist.
      */
      const QuotedDataParameter::Type& param(const tempGruu_Param& paramType) const;

      // Allow the accessor token to register itself in ParameterFactories
      friend class tempGruu_Param;


      /**
         Returns a reference to the value of the 'expires' parameter
         on this NameAddr.
         @code header(p_expires) @endcode
      */
      UInt32Parameter::Type& param(const expires_Param& paramType);

      /**
         Returns a const reference to the value of the 'expires' parameter 
         on this NameAddr.
         @code header(p_expires) @endcode
         @throws A ParserCategory::Exception if the parameter does not exist.
      */
      const UInt32Parameter::Type& param(const expires_Param& paramType) const;

      // Allow the accessor token to register itself in ParameterFactories
      friend class expires_Param;


      /**
         Returns a reference to the value of the 'q' parameter
         on this NameAddr.
         @code header(p_q) @endcode
      */
      QValueParameter::Type& param(const q_Param& paramType);

      /**
         Returns a const reference to the value of the 'q' parameter 
         on this NameAddr.
         @code header(p_q) @endcode
         @throws A ParserCategory::Exception if the parameter does not exist.
      */
      const QValueParameter::Type& param(const q_Param& paramType) const;

      // Allow the accessor token to register itself in ParameterFactories
      friend class q_Param;


      /**
         Returns a reference to the value of the 'tag' parameter
         on this NameAddr.
         @code header(p_tag) @endcode
      */
      DataParameter::Type& param(const tag_Param& paramType);

      /**
         Returns a const reference to the value of the 'tag' parameter 
         on this NameAddr.
         @code header(p_tag) @endcode
         @throws A ParserCategory::Exception if the parameter does not exist.
      */
      const DataParameter::Type& param(const tag_Param& paramType) const;

      // Allow the accessor token to register itself in ParameterFactories
      friend class tag_Param;

// END AUTOGENERATED

   protected:
      bool mAllContacts;
      Uri mUri;
      Data mDisplayName;

   private:

      static ParameterTypes::Factory ParameterFactories[ParameterTypes::MAX_PARAMETER];
};
typedef ParserContainer<NameAddr> NameAddrs;
 
}

#endif
/* ====================================================================
 * The Vovida Software License, Version 1.0 
 * 
 * Copyright (c) 2000 Vovida Networks, Inc.  All rights reserved.
 * 
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 
 * 3. The names "VOCAL", "Vovida Open Communication Application Library",
 *    and "Vovida Open Communication Application Library (VOCAL)" must
 *    not be used to endorse or promote products derived from this
 *    software without prior written permission. For written
 *    permission, please contact vocal@vovida.org.
 *
 * 4. Products derived from this software may not be called "VOCAL", nor
 *    may "VOCAL" appear in their name, without prior written
 *    permission of Vovida Networks, Inc.
 * 
 * THIS SOFTWARE IS PROVIDED "AS IS" AND ANY EXPRESSED OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE, TITLE AND
 * NON-INFRINGEMENT ARE DISCLAIMED.  IN NO EVENT SHALL VOVIDA
 * NETWORKS, INC. OR ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT DAMAGES
 * IN EXCESS OF $1,000, NOR FOR ANY INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
 * OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE
 * USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH
 * DAMAGE.
 * 
 * ====================================================================
 * 
 * This software consists of voluntary contributions made by Vovida
 * Networks, Inc. and many individuals on behalf of Vovida Networks,
 * Inc.  For more information on Vovida Networks, Inc., please see
 * <http://www.vovida.org/>.
 *
 */
