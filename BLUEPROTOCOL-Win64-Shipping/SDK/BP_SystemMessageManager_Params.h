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
	 * Function BP_SystemMessageManager.BP_SystemMessageManager_C.GetContentActivateMessage
	 */
	struct UBP_SystemMessageManager_C_GetContentActivateMessage_Params
	{
	public:
		TArray<class FName>                                        ContentId;                                               // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class FText                                                Message;                                                 // 0x0010(0x0018)  (Parm, OutParm)
		bool                                                       ReturnValue;                                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3NDN[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_SystemMessageManager.BP_SystemMessageManager_C.IsSystemMessageShowingOrStandby
	 */
	struct UBP_SystemMessageManager_C_IsSystemMessageShowingOrStandby_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZJBX[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_SystemMessageManager.BP_SystemMessageManager_C.ShowGetEmoteMessage
	 */
	struct UBP_SystemMessageManager_C_ShowGetEmoteMessage_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                EmoteId;                                                 // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SystemMessageManager.BP_SystemMessageManager_C.EndMessage
	 */
	struct UBP_SystemMessageManager_C_EndMessage_Params
	{	};

	/**
	 * Function BP_SystemMessageManager.BP_SystemMessageManager_C.ShowMessage
	 */
	struct UBP_SystemMessageManager_C_ShowMessage_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Message;                                                 // 0x0008(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       IsLowerPosition;                                         // 0x0020(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bDoNotSkip;                                              // 0x0021(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_SystemMessageManager.BP_SystemMessageManager_C.ClearSystemMessage
	 */
	struct UBP_SystemMessageManager_C_ClearSystemMessage_Params
	{	};

	/**
	 * Function BP_SystemMessageManager.BP_SystemMessageManager_C.CreateSysMsg
	 */
	struct UBP_SystemMessageManager_C_CreateSysMsg_Params
	{
	public:
		struct FSystemMessageRequestData                           ReqData;                                                 // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SystemMessageManager.BP_SystemMessageManager_C.OnEndMessage_イベント
	 */
	struct UBP_SystemMessageManager_C_OnEndMessage__Params
	{	};

	/**
	 * Function BP_SystemMessageManager.BP_SystemMessageManager_C.CustomEvent_1
	 */
	struct UBP_SystemMessageManager_C_CustomEvent_1_Params
	{	};

	/**
	 * Function BP_SystemMessageManager.BP_SystemMessageManager_C.ExecuteUbergraph_BP_SystemMessageManager
	 */
	struct UBP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AGLF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
