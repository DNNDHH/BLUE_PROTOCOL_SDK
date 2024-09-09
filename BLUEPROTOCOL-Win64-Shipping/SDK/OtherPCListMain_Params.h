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
	 * Function OtherPCListMain.OtherPCListMain_C.GetOwningSbPlayerState
	 */
	struct UOtherPCListMain_C_GetOwningSbPlayerState_Params
	{
	public:
		class ASBPlayerState*                                      Result;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function OtherPCListMain.OtherPCListMain_C.SelectPlayer
	 */
	struct UOtherPCListMain_C_SelectPlayer_Params
	{
	public:
		class APlayerState*                                        InPlayerState;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bOnlyListUpdate;                                         // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SLBZ[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function OtherPCListMain.OtherPCListMain_C.Search Player List
	 */
	struct UOtherPCListMain_C_SearchPlayerList_Params
	{
	public:
		class APlayerState*                                        InPlayerState;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    MatchistID;                                              // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OtherPCListMain.OtherPCListMain_C.ResetSelectList
	 */
	struct UOtherPCListMain_C_ResetSelectList_Params
	{	};

	/**
	 * Function OtherPCListMain.OtherPCListMain_C.UpdatePlayerList
	 */
	struct UOtherPCListMain_C_UpdatePlayerList_Params
	{	};

	/**
	 * Function OtherPCListMain.OtherPCListMain_C.Construct
	 */
	struct UOtherPCListMain_C_Construct_Params
	{	};

	/**
	 * Function OtherPCListMain.OtherPCListMain_C.Destruct
	 */
	struct UOtherPCListMain_C_Destruct_Params
	{	};

	/**
	 * Function OtherPCListMain.OtherPCListMain_C.Open
	 */
	struct UOtherPCListMain_C_Open_Params
	{	};

	/**
	 * Function OtherPCListMain.OtherPCListMain_C.OnEventListSelected
	 */
	struct UOtherPCListMain_C_OnEventListSelected_Params
	{
	public:
		int32_t                                                    listIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OtherPCListMain.OtherPCListMain_C.BndEvt__UpdateButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UOtherPCListMain_C_BndEvt__UpdateButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function OtherPCListMain.OtherPCListMain_C.OnIsBlackListed_event_1
	 */
	struct UOtherPCListMain_C_OnIsBlackListed_event_1_Params
	{
	public:
		bool                                                       bIsBlackListed;                                          // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OtherPCListMain.OtherPCListMain_C.StartUpdateAnim
	 */
	struct UOtherPCListMain_C_StartUpdateAnim_Params
	{
	public:
		bool                                                       IsLoop;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OtherPCListMain.OtherPCListMain_C.EndUpdateAnim
	 */
	struct UOtherPCListMain_C_EndUpdateAnim_Params
	{	};

	/**
	 * Function OtherPCListMain.OtherPCListMain_C.MoveCursorPositionToList
	 */
	struct UOtherPCListMain_C_MoveCursorPositionToList_Params
	{
	public:
		class UWidget*                                             Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OtherPCListMain.OtherPCListMain_C.Update
	 */
	struct UOtherPCListMain_C_Update_Params
	{	};

	/**
	 * Function OtherPCListMain.OtherPCListMain_C.OnEventListSelectedMain
	 */
	struct UOtherPCListMain_C_OnEventListSelectedMain_Params
	{
	public:
		int32_t                                                    listIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bOnlyListUpdate;                                         // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OtherPCListMain.OtherPCListMain_C.ExecuteUbergraph_OtherPCListMain
	 */
	struct UOtherPCListMain_C_ExecuteUbergraph_OtherPCListMain_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OtherPCListMain.OtherPCListMain_C.OnListUpdated__DelegateSignature
	 */
	struct UOtherPCListMain_C_OnListUpdated__DelegateSignature_Params
	{	};

	/**
	 * Function OtherPCListMain.OtherPCListMain_C.OnClickUpdateButton__DelegateSignature
	 */
	struct UOtherPCListMain_C_OnClickUpdateButton__DelegateSignature_Params
	{	};

	/**
	 * Function OtherPCListMain.OtherPCListMain_C.OnListSelected__DelegateSignature
	 */
	struct UOtherPCListMain_C_OnListSelected__DelegateSignature_Params
	{
	public:
		class ASBPlayerState*                                      PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                CharacterId;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
