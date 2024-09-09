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
	 * Function ArenaList.ArenaList_C.SetupListItem
	 */
	struct UArenaList_C_SetupListItem_Params
	{	};

	/**
	 * Function ArenaList.ArenaList_C.MakeArenaInfoList
	 */
	struct UArenaList_C_MakeArenaInfoList_Params
	{	};

	/**
	 * Function ArenaList.ArenaList_C.Construct
	 */
	struct UArenaList_C_Construct_Params
	{	};

	/**
	 * Function ArenaList.ArenaList_C.BndEvt__BtnDecide_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
	 */
	struct UArenaList_C_BndEvt__BtnDecide_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function ArenaList.ArenaList_C.BndEvt__BtnCancel_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
	 */
	struct UArenaList_C_BndEvt__BtnCancel_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function ArenaList.ArenaList_C.Destruct
	 */
	struct UArenaList_C_Destruct_Params
	{	};

	/**
	 * Function ArenaList.ArenaList_C.OnSelectItem
	 */
	struct UArenaList_C_OnSelectItem_Params
	{
	public:
		struct FSBMapInfo                                          ArenaInfo;                                               // 0x0000(0x01F8)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UUMG_MatchingMenu_ListItem_C*                        item;                                                    // 0x01F8(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ArenaList.ArenaList_C.ExecuteUbergraph_ArenaList
	 */
	struct UArenaList_C_ExecuteUbergraph_ArenaList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UH5F[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ArenaList.ArenaList_C.OnFinish__DelegateSignature
	 */
	struct UArenaList_C_OnFinish__DelegateSignature_Params
	{
	public:
		class FString                                              Result;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
