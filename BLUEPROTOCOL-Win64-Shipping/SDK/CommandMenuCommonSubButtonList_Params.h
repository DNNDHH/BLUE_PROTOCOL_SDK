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
	 * Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.Set Button Abort Anim and Collapse
	 */
	struct UCommandMenuCommonSubButtonList_C_SetButtonAbortAnimandCollapse_Params
	{
	public:
		int32_t                                                    InButtonId;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.Set Bookmark Array Enable
	 */
	struct UCommandMenuCommonSubButtonList_C_SetBookmarkArrayEnable_Params
	{
	public:
		TArray<class FString>                                      BookmarkNameList;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.SetBookmarkEnable
	 */
	struct UCommandMenuCommonSubButtonList_C_SetBookmarkEnable_Params
	{
	public:
		int32_t                                                    InButtonId;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bEnable;                                                 // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_A33Q[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.SetButtonText
	 */
	struct UCommandMenuCommonSubButtonList_C_SetButtonText_Params
	{
	public:
		int32_t                                                    ListId;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                Name;                                                    // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_37XL[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.ExcramationIconVisible
	 */
	struct UCommandMenuCommonSubButtonList_C_ExcramationIconVisible_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsVisible;                                              // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YP2J[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.InAnimation
	 */
	struct UCommandMenuCommonSubButtonList_C_InAnimation_Params
	{	};

	/**
	 * Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.PurgeButton
	 */
	struct UCommandMenuCommonSubButtonList_C_PurgeButton_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.SetUIBlock
	 */
	struct UCommandMenuCommonSubButtonList_C_SetUIBlock_Params
	{
	public:
		bool                                                       bShow;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.SetButtonEnable
	 */
	struct UCommandMenuCommonSubButtonList_C_SetButtonEnable_Params
	{
	public:
		int32_t                                                    InButtonId;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsButtonEnable;                                          // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4DW4[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.ChangeFocusButton
	 */
	struct UCommandMenuCommonSubButtonList_C_ChangeFocusButton_Params
	{
	public:
		int32_t                                                    InFocusButtonId;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bSyncCursorPosition;                                     // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.PreConstruct
	 */
	struct UCommandMenuCommonSubButtonList_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.Construct
	 */
	struct UCommandMenuCommonSubButtonList_C_Construct_Params
	{	};

	/**
	 * Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.Tick
	 */
	struct UCommandMenuCommonSubButtonList_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.CommandMenuCommonSubButton_OnClick
	 */
	struct UCommandMenuCommonSubButtonList_C_CommandMenuCommonSubButton_OnClick_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.OnClick_Event_1
	 */
	struct UCommandMenuCommonSubButtonList_C_OnClick_Event_1_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.Alpha_Renew2
	 */
	struct UCommandMenuCommonSubButtonList_C_Alpha_Renew2_Params
	{
	public:
		TArray<class FName>                                        TextIdNameList;                                          // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.Destruct
	 */
	struct UCommandMenuCommonSubButtonList_C_Destruct_Params
	{	};

	/**
	 * Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.LRVisibleUpdeta
	 */
	struct UCommandMenuCommonSubButtonList_C_LRVisibleUpdeta_Params
	{	};

	/**
	 * Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.Bind
	 */
	struct UCommandMenuCommonSubButtonList_C_Bind_Params
	{	};

	/**
	 * Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.CustomEvent_1
	 */
	struct UCommandMenuCommonSubButtonList_C_CustomEvent_1_Params
	{
	public:
		ESBPadKeySkinType                                          SkinType;                                                // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.CustomEvent_2
	 */
	struct UCommandMenuCommonSubButtonList_C_CustomEvent_2_Params
	{	};

	/**
	 * Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.Unbind
	 */
	struct UCommandMenuCommonSubButtonList_C_Unbind_Params
	{	};

	/**
	 * Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.ExecuteUbergraph_CommandMenuCommonSubButtonList
	 */
	struct UCommandMenuCommonSubButtonList_C_ExecuteUbergraph_CommandMenuCommonSubButtonList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C.OnClick__DelegateSignature
	 */
	struct UCommandMenuCommonSubButtonList_C_OnClick__DelegateSignature_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
