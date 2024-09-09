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
	 * Function LibraryMenu_Monster_SwitchWindow.LibraryMenu_Monster_SwitchWindow_C.UpdateReadMarkCount
	 */
	struct ULibraryMenu_Monster_SwitchWindow_C_UpdateReadMarkCount_Params
	{	};

	/**
	 * Function LibraryMenu_Monster_SwitchWindow.LibraryMenu_Monster_SwitchWindow_C.CloseAreaList
	 */
	struct ULibraryMenu_Monster_SwitchWindow_C_CloseAreaList_Params
	{	};

	/**
	 * Function LibraryMenu_Monster_SwitchWindow.LibraryMenu_Monster_SwitchWindow_C.ChangeEnemyType
	 */
	struct ULibraryMenu_Monster_SwitchWindow_C_ChangeEnemyType_Params
	{
	public:
		int32_t                                                    Type;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_Monster_SwitchWindow.LibraryMenu_Monster_SwitchWindow_C.SetEnemyData
	 */
	struct ULibraryMenu_Monster_SwitchWindow_C_SetEnemyData_Params
	{
	public:
		struct FSBLibraryEnemyData                                 EnemyData;                                               // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function LibraryMenu_Monster_SwitchWindow.LibraryMenu_Monster_SwitchWindow_C.SetActiveTab
	 */
	struct ULibraryMenu_Monster_SwitchWindow_C_SetActiveTab_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TCKA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LibraryMenu_Monster_SwitchWindow.LibraryMenu_Monster_SwitchWindow_C.Construct
	 */
	struct ULibraryMenu_Monster_SwitchWindow_C_Construct_Params
	{	};

	/**
	 * Function LibraryMenu_Monster_SwitchWindow.LibraryMenu_Monster_SwitchWindow_C.BndEvt__LibraryMenu_Monster_SwitchWindow_DetailTabButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 */
	struct ULibraryMenu_Monster_SwitchWindow_C_BndEvt__LibraryMenu_Monster_SwitchWindow_DetailTabButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function LibraryMenu_Monster_SwitchWindow.LibraryMenu_Monster_SwitchWindow_C.BndEvt__LibraryMenu_Monster_SwitchWindow_ExplainTabButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
	 */
	struct ULibraryMenu_Monster_SwitchWindow_C_BndEvt__LibraryMenu_Monster_SwitchWindow_ExplainTabButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function LibraryMenu_Monster_SwitchWindow.LibraryMenu_Monster_SwitchWindow_C.AreaListVisibleChange
	 */
	struct ULibraryMenu_Monster_SwitchWindow_C_AreaListVisibleChange_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LibraryMenu_Monster_SwitchWindow.LibraryMenu_Monster_SwitchWindow_C.Destruct
	 */
	struct ULibraryMenu_Monster_SwitchWindow_C_Destruct_Params
	{	};

	/**
	 * Function LibraryMenu_Monster_SwitchWindow.LibraryMenu_Monster_SwitchWindow_C.AreaListSelect
	 */
	struct ULibraryMenu_Monster_SwitchWindow_C_AreaListSelect_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                EnemyId;                                                 // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_Monster_SwitchWindow.LibraryMenu_Monster_SwitchWindow_C.ExecuteUbergraph_LibraryMenu_Monster_SwitchWindow
	 */
	struct ULibraryMenu_Monster_SwitchWindow_C_ExecuteUbergraph_LibraryMenu_Monster_SwitchWindow_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_Monster_SwitchWindow.LibraryMenu_Monster_SwitchWindow_C.OnAreaListSelect__DelegateSignature
	 */
	struct ULibraryMenu_Monster_SwitchWindow_C_OnAreaListSelect__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                EnemyId;                                                 // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_Monster_SwitchWindow.LibraryMenu_Monster_SwitchWindow_C.OnAreaListVisibleChange__DelegateSignature
	 */
	struct ULibraryMenu_Monster_SwitchWindow_C_OnAreaListVisibleChange__DelegateSignature_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
