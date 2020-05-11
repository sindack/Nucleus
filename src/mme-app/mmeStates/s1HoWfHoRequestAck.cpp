  
/*
 * Copyright 2019-present Infosys Limited
 *
 * SPDX-License-Identifier: Apache-2.0
 */
 
/**************************************
 * s1HoWfHoRequestAck.cpp
 * This is an auto generated file.
 * Please do not edit this file.
 * All edits to be made through template source file
 * <TOP-DIR/scripts/SMCodeGen/templates/stateMachineTmpls/state.cpp.tt>
 **************************************/

#include "mmeSmDefs.h"
#include "actionTable.h"
#include "actionHandlers/actionHandlers.h"

#include "mmeStates/s1HoWfHoRequestAck.h"	
#include "mmeStates/s1HoWfHoNotify.h"

using namespace mme;
using namespace SM;

/******************************************************************************
* Constructor
******************************************************************************/
S1HoWfHoRequestAck::S1HoWfHoRequestAck():State(s1_ho_wf_ho_request_ack)
{
}

/******************************************************************************
* Destructor
******************************************************************************/
S1HoWfHoRequestAck::~S1HoWfHoRequestAck()
{
}

/******************************************************************************
* creates and returns static instance
******************************************************************************/
S1HoWfHoRequestAck* S1HoWfHoRequestAck::Instance()
{
        static S1HoWfHoRequestAck state;
        return &state;
}

/******************************************************************************
* initializes eventToActionsMap
******************************************************************************/
void S1HoWfHoRequestAck::initialize()
{
        {
                ActionTable actionTable;
                actionTable.addAction(&ActionHandlers::process_ho_request_ack);
                actionTable.addAction(&ActionHandlers::send_ho_command_to_src_enb);
                actionTable.setNextState(S1HoWfHoNotify::Instance());
                eventToActionsMap.insert(pair<uint16_t, ActionTable>(HO_REQUEST_ACK_FROM_ENB, actionTable));
        }
}
