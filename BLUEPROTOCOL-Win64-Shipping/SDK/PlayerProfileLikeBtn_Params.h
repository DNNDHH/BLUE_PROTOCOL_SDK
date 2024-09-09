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
	 * Function PlayerProfileLikeBtn.PlayerProfileLikeBtn_C.SetButtonType
	 */
	struct UPlayerProfileLikeBtn_C_SetButtonType_Params
	{
	public:
		ESendLikeError                                             Selection;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerProfileLikeBtn.PlayerProfileLikeBtn_C.SetButtonEnable
	 */
	struct UPlayerProfileLikeBtn_C_SetButtonEnable_Params
	{
	public:
		bool                                                       bInIsEnabled;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerProfileLikeBtn.PlayerProfileLikeBtn_C.SetData
	 */
	struct UPlayerProfileLikeBtn_C_SetData_Params
	{
	public:
		bool                                                       IsSendLIke;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7MZ8[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    OnlineStatus;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       PSOnlyDiff;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerProfileLikeBtn.PlayerProfileLikeBtn_C.BndEvt__BtnLike_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UPlayerProfileLikeBtn_C_BndEvt__BtnLike_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function PlayerProfileLikeBtn.PlayerProfileLikeBtn_C.SendLike
	 */
	struct UPlayerProfileLikeBtn_C_SendLike_Params
	{
	public:
		TArray<struct FLikeSend>                                   SendLikeList;                                            // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function PlayerProfileLikeBtn.PlayerProfileLikeBtn_C.OnSendLikeEvent
	 */
	struct UPlayerProfileLikeBtn_C_OnSendLikeEvent_Params
	{
	public:
		bool                                                       bWasSuccessful;                                          // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OWEN[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    RetCode;                                                 // 0x0004(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Warning;                                                 // 0x0008(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerProfileLikeBtn.PlayerProfileLikeBtn_C.SetButtonErrorType
	 */
	struct UPlayerProfileLikeBtn_C_SetButtonErrorType_Params
	{
	public:
		int32_t                                                    InWarning;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InIsSystemMessage;                                       // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerProfileLikeBtn.PlayerProfileLikeBtn_C.ExecuteUbergraph_PlayerProfileLikeBtn
	 */
	struct UPlayerProfileLikeBtn_C_ExecuteUbergraph_PlayerProfileLikeBtn_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerProfileLikeBtn.PlayerProfileLikeBtn_C.BtnEventComplete__DelegateSignature
	 */
	struct UPlayerProfileLikeBtn_C_BtnEventComplete__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
