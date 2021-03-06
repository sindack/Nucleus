/*
 * Copyright 2020-present Infosys Limited
 *
 * SPDX-License-Identifier: Apache-2.0
 */
 
 /******************************************************
 * attachWfEsmInfoCheck.h
 * This is an auto generated file.
 * Please do not edit this file.
 * All edits to be made through template source file
 * <TOP-DIR/scripts/SMCodeGen/templates/stateMachineTmpls/state.h.tt>
 ******************************************************/
 
#ifndef __AttachWfEsmInfoCheck__
#define __AttachWfEsmInfoCheck__

#include "state.h"

namespace mme {

	class AttachWfEsmInfoCheck : public SM::State
	{
		public:
			/******************************************
			* Instance 
			*    Creates static instance for the state
			*******************************************/
			static AttachWfEsmInfoCheck* Instance();

			/****************************************
			* AttachWfEsmInfoCheck
			*    Destructor
			****************************************/
			~AttachWfEsmInfoCheck();			
			
			/******************************************
			* initialize
			*  Initializes action handlers for the state
			* and next state
			******************************************/
			void initialize();
	
		private:
			/****************************************
			* AttachWfEsmInfoCheck
			*    Private constructor
			****************************************/
			AttachWfEsmInfoCheck();  
	};
};
#endif // __AttachWfEsmInfoCheck__
