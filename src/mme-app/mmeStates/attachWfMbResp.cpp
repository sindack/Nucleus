
/*
 * Copyright 2020-present Infosys Limited
 *
 * SPDX-License-Identifier: Apache-2.0
 */
 
/**************************************
 * attachWfMbResp.cpp
 * This is an auto generated file.
 * Please do not edit this file.
 * All edits to be made through template source file
 * <TOP-DIR/scripts/SMCodeGen/templates/stateMachineTmpls/state.cpp.tt>
 **************************************/


#include "actionTable.h"
#include "actionHandlers/actionHandlers.h"
#include "mmeSmDefs.h"
#include "utils/mmeStatesUtils.h"
#include "utils/mmeTimerTypes.h"

#include "mmeStates/attachWfMbResp.h"

using namespace mme;
using namespace SM;

/******************************************************************************
* Constructor
******************************************************************************/
AttachWfMbResp::AttachWfMbResp():State(attach_wf_mb_resp, defaultStateGuardTimerDuration_c)
{
        stateEntryAction = &MmeStatesUtils::on_state_entry;
        stateExitAction = &MmeStatesUtils::on_state_exit;
        eventValidator = &MmeStatesUtils::validate_event;
}

/******************************************************************************
* Destructor
******************************************************************************/
AttachWfMbResp::~AttachWfMbResp()
{
}

/******************************************************************************
* creates and returns static instance
******************************************************************************/
AttachWfMbResp* AttachWfMbResp::Instance()
{
        static AttachWfMbResp state;
        return &state;
}

/******************************************************************************
* initializes eventToActionsMap
******************************************************************************/
void AttachWfMbResp::initialize()
{
        {
                ActionTable actionTable;
                actionTable.addAction(&ActionHandlers::process_mb_resp);
                actionTable.addAction(&ActionHandlers::check_and_send_emm_info);
                actionTable.addAction(&ActionHandlers::attach_done);
                eventToActionsMap.insert(pair<uint16_t, ActionTable>(MB_RESP_FROM_SGW, actionTable));
        }
        {
                ActionTable actionTable;
                actionTable.addAction(&ActionHandlers::handle_attach_request);
                actionTable.addAction(&ActionHandlers::del_session_req);
                actionTable.addAction(&ActionHandlers::abort_attach);
                actionTable.addAction(&ActionHandlers::default_attach_req_handler);
                eventToActionsMap.insert(pair<uint16_t, ActionTable>(ATTACH_REQ_FROM_UE, actionTable));
        }
        {
                ActionTable actionTable;
                actionTable.addAction(&ActionHandlers::handle_state_guard_timeouts);
                eventToActionsMap.insert(pair<uint16_t, ActionTable>(STATE_GUARD_TIMEOUT, actionTable));
        }
        {
                ActionTable actionTable;
                actionTable.addAction(&ActionHandlers::del_session_req);
                actionTable.addAction(&ActionHandlers::send_attach_reject);
                actionTable.addAction(&ActionHandlers::send_s1_rel_cmd_to_ue);
                actionTable.addAction(&ActionHandlers::abort_attach);
                eventToActionsMap.insert(pair<uint16_t, ActionTable>(ABORT_EVENT, actionTable));
        }
}
