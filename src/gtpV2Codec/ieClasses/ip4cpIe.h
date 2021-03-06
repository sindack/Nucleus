/*
 * Copyright (c) 2020, Infosys Ltd.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
 /******************************************************************************
 *
 * This is an auto generated file.
 * Please do not edit this file.
 * All edits to be made through template source file
 * <TOP-DIR/scripts/GtpV2StackCodeGen/tts/ietemplate.h.tt>
 ******************************************************************************/
#ifndef IP4CPIE_H_
#define IP4CPIE_H_

#include "manual/gtpV2Ie.h"



class Ip4cpIe: public GtpV2Ie {
public:
    Ip4cpIe();
    virtual ~Ip4cpIe();

    bool encodeIp4cpIe(MsgBuffer &buffer,
                 Ip4cpIeData const &data);
    bool decodeIp4cpIe(MsgBuffer &buffer,
                 Ip4cpIeData &data, Uint16 length);
    void displayIp4cpIe_v(Ip4cpIeData const &data,
                 Debug &stream);
};

#endif /* IP4CPIE_H_ */
