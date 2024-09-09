#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function SecondPasswordSender.SecondPasswordSender_C.SetCaptionFailure
	 */
	struct USecondPasswordSender_C_SetCaptionFailure_Params
	{
	public:
		int32_t                                                    ExpireCount;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0214[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SecondPasswordSender.SecondPasswordSender_C.SetCaption
	 */
	struct USecondPasswordSender_C_SetCaption_Params
	{	};

	/**
	 * Function SecondPasswordSender.SecondPasswordSender_C.ClearPassword
	 */
	struct USecondPasswordSender_C_ClearPassword_Params
	{	};

	/**
	 * Function SecondPasswordSender.SecondPasswordSender_C.SendPassword
	 */
	struct USecondPasswordSender_C_SendPassword_Params
	{
	public:
		ESendSecondPasswordRole                                    Role;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_267G[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SecondPasswordSender.SecondPasswordSender_C.OnAuthorizeSecondPassword
	 */
	struct USecondPasswordSender_C_OnAuthorizeSecondPassword_Params
	{
	public:
		bool                                                       bWasSuccessful;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OTIH[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ExpireCount;                                             // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESendSecondPasswordRole                                    Role;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bWasAuthorized;                                          // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SecondPasswordSender.SecondPasswordSender_C.BndEvt__SoftwareNumericKeypad_K2Node_ComponentBoundEvent_2_OnClickedEnter__DelegateSignature
	 */
	struct USecondPasswordSender_C_BndEvt__SoftwareNumericKeypad_K2Node_ComponentBoundEvent_2_OnClickedEnter__DelegateSignature_Params
	{	};

	/**
	 * Function SecondPasswordSender.SecondPasswordSender_C.Construct
	 */
	struct USecondPasswordSender_C_Construct_Params
	{	};

	/**
	 * Function SecondPasswordSender.SecondPasswordSender_C.BndEvt__SecondPasswordSender_CmnClose01_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature
	 */
	struct USecondPasswordSender_C_BndEvt__SecondPasswordSender_CmnClose01_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature_Params
	{	};

	/**
	 * Function SecondPasswordSender.SecondPasswordSender_C.Cancel
	 */
	struct USecondPasswordSender_C_Cancel_Params
	{	};

	/**
	 * Function SecondPasswordSender.SecondPasswordSender_C.ExecuteUbergraph_SecondPasswordSender
	 */
	struct USecondPasswordSender_C_ExecuteUbergraph_SecondPasswordSender_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SecondPasswordSender.SecondPasswordSender_C.OnEnd__DelegateSignature
	 */
	struct USecondPasswordSender_C_OnEnd__DelegateSignature_Params
	{
	public:
		ESendSecondPasswordRole                                    Role;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESecondPasswordSenderEndReason                             Reason;                                                  // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESecondPasswordSenderStartType                             StartType;                                               // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
