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
	 * Function CategoryList_Type1_Group.CategoryList_Type1_Group_C.SetAllNewIcon
	 */
	struct UCategoryList_Type1_Group_C_SetAllNewIcon_Params
	{
	public:
		bool                                                       InIsActive;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_H6FE[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CategoryList_Type1_Group.CategoryList_Type1_Group_C.SetNewIcon
	 */
	struct UCategoryList_Type1_Group_C_SetNewIcon_Params
	{
	public:
		int32_t                                                    InId;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InIsActive;                                              // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CategoryList_Type1_Group.CategoryList_Type1_Group_C.SetButtonSelectIndex
	 */
	struct UCategoryList_Type1_Group_C_SetButtonSelectIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Selected;                                                // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZYI7[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CategoryList_Type1_Group.CategoryList_Type1_Group_C.CheckListNewIconVisible
	 */
	struct UCategoryList_Type1_Group_C_CheckListNewIconVisible_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CategoryList_Type1_Group.CategoryList_Type1_Group_C.SetButtonSelected
	 */
	struct UCategoryList_Type1_Group_C_SetButtonSelected_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Selected;                                                // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_C7IH[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CategoryList_Type1_Group.CategoryList_Type1_Group_C.AddListItem
	 */
	struct UCategoryList_Type1_Group_C_AddListItem_Params
	{
	public:
		class UCategoryList_Type1_Item_C*                          ListItem;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ID;                                                      // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CategoryList_Type1_Group.CategoryList_Type1_Group_C.SetGroupNameText
	 */
	struct UCategoryList_Type1_Group_C_SetGroupNameText_Params
	{
	public:
		class FText                                                NameText;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function CategoryList_Type1_Group.CategoryList_Type1_Group_C.BndEvt__CategoryList_Type1_Group_ExpandableArea_64_K2Node_ComponentBoundEvent_0_OnExpandableAreaExpansionChanged__DelegateSignature
	 */
	struct UCategoryList_Type1_Group_C_BndEvt__CategoryList_Type1_Group_ExpandableArea_64_K2Node_ComponentBoundEvent_0_OnExpandableAreaExpansionChanged__DelegateSignature_Params
	{
	public:
		class UExpandableArea*                                     Area;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsExpanded;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CategoryList_Type1_Group.CategoryList_Type1_Group_C.BndEvt__CategoryList_Type1_Group_ExpandableArea_K2Node_ComponentBoundEvent_1_OnExpandableAreaExpansionChanged__DelegateSignature
	 */
	struct UCategoryList_Type1_Group_C_BndEvt__CategoryList_Type1_Group_ExpandableArea_K2Node_ComponentBoundEvent_1_OnExpandableAreaExpansionChanged__DelegateSignature_Params
	{
	public:
		class UExpandableArea*                                     Area;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsExpanded;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CategoryList_Type1_Group.CategoryList_Type1_Group_C.ExecuteUbergraph_CategoryList_Type1_Group
	 */
	struct UCategoryList_Type1_Group_C_ExecuteUbergraph_CategoryList_Type1_Group_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Z7IQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
