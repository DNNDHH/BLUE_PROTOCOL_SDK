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
	 * Function PlayerProfileFollowBtn.PlayerProfileFollowBtn_C.SetFriend
	 */
	struct UPlayerProfileFollowBtn_C_SetFriend_Params
	{
	public:
		bool                                                       bFriend;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bDoneSend;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bCanSend;                                                // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerProfileFollowBtn.PlayerProfileFollowBtn_C.SetFollow
	 */
	struct UPlayerProfileFollowBtn_C_SetFollow_Params
	{
	public:
		bool                                                       bFollow;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5NEK[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PlayerProfileFollowBtn.PlayerProfileFollowBtn_C.BndEvt__BtnFollow_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UPlayerProfileFollowBtn_C_BndEvt__BtnFollow_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function PlayerProfileFollowBtn.PlayerProfileFollowBtn_C.BndEvt__BtnFollow_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UPlayerProfileFollowBtn_C_BndEvt__BtnFollow_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function PlayerProfileFollowBtn.PlayerProfileFollowBtn_C.BndEvt__BtnFollow_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UPlayerProfileFollowBtn_C_BndEvt__BtnFollow_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function PlayerProfileFollowBtn.PlayerProfileFollowBtn_C.ExecuteUbergraph_PlayerProfileFollowBtn
	 */
	struct UPlayerProfileFollowBtn_C_ExecuteUbergraph_PlayerProfileFollowBtn_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HDRQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PlayerProfileFollowBtn.PlayerProfileFollowBtn_C.EventClicked__DelegateSignature
	 */
	struct UPlayerProfileFollowBtn_C_EventClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
