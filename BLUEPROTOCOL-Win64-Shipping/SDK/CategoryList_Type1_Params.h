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
	 * Function CategoryList_Type1.CategoryList_Type1_C.SetScrollBottomOffset
	 */
	struct UCategoryList_Type1_C_SetScrollBottomOffset_Params
	{
	public:
		float                                                      Offset;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CategoryList_Type1.CategoryList_Type1_C.SetColorChange
	 */
	struct UCategoryList_Type1_C_SetColorChange_Params
	{
	public:
		bool                                                       IsColorChange;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CategoryList_Type1.CategoryList_Type1_C.SetEnableAllNewIconEx
	 */
	struct UCategoryList_Type1_C_SetEnableAllNewIconEx_Params
	{
	public:
		bool                                                       InIsActive;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5TSN[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CategoryList_Type1.CategoryList_Type1_C.SetNewIconEx
	 */
	struct UCategoryList_Type1_C_SetNewIconEx_Params
	{
	public:
		bool                                                       InIsActive;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8O0M[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    LargeCategoryId;                                         // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    MediumCategoryId;                                        // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CategoryList_Type1.CategoryList_Type1_C.MakeGroupWidget
	 */
	struct UCategoryList_Type1_C_MakeGroupWidget_Params
	{
	public:
		class FString                                              GroupName;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Text;                                                    // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3UU7[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CategoryList_Type1.CategoryList_Type1_C.AddGroupList
	 */
	struct UCategoryList_Type1_C_AddGroupList_Params
	{
	public:
		class FString                                              Group;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    ID;                                                      // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9PV9[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Name;                                                    // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function CategoryList_Type1.CategoryList_Type1_C.AddGroup
	 */
	struct UCategoryList_Type1_C_AddGroup_Params
	{
	public:
		class FString                                              GroupName;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Text;                                                    // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function CategoryList_Type1.CategoryList_Type1_C.SetScrollOffset
	 */
	struct UCategoryList_Type1_C_SetScrollOffset_Params
	{
	public:
		float                                                      Offset;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CategoryList_Type1.CategoryList_Type1_C.GetScrollOffset
	 */
	struct UCategoryList_Type1_C_GetScrollOffset_Params
	{
	public:
		float                                                      Offset;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CategoryList_Type1.CategoryList_Type1_C.Check List New Icon Visible
	 */
	struct UCategoryList_Type1_C_CheckListNewIconVisible_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KYPZ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CategoryList_Type1.CategoryList_Type1_C.GetIndex
	 */
	struct UCategoryList_Type1_C_GetIndex_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CategoryList_Type1.CategoryList_Type1_C.SetNewIconAll
	 */
	struct UCategoryList_Type1_C_SetNewIconAll_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RGYZ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CategoryList_Type1.CategoryList_Type1_C.SetNewIcon
	 */
	struct UCategoryList_Type1_C_SetNewIcon_Params
	{
	public:
		int32_t                                                    CategoryIndex;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsActive;                                                // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_I7NT[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CategoryList_Type1.CategoryList_Type1_C.AddCategoryList
	 */
	struct UCategoryList_Type1_C_AddCategoryList_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3OWF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Name;                                                    // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function CategoryList_Type1.CategoryList_Type1_C.GetSelectedCategoryListIndex
	 */
	struct UCategoryList_Type1_C_GetSelectedCategoryListIndex_Params
	{
	public:
		int32_t                                                    SelectedCategoryListIndex;                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CategoryList_Type1.CategoryList_Type1_C.GetSelectedId
	 */
	struct UCategoryList_Type1_C_GetSelectedId_Params
	{
	public:
		int32_t                                                    Output;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CategoryList_Type1.CategoryList_Type1_C.SetCategoryListSelected
	 */
	struct UCategoryList_Type1_C_SetCategoryListSelected_Params
	{
	public:
		int32_t                                                    InListIndex;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bSelected;                                               // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_W9UW[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CategoryList_Type1.CategoryList_Type1_C.PreConstruct
	 */
	struct UCategoryList_Type1_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CategoryList_Type1.CategoryList_Type1_C.CreateList
	 */
	struct UCategoryList_Type1_C_CreateList_Params
	{	};

	/**
	 * Function CategoryList_Type1.CategoryList_Type1_C.ClickListItem
	 */
	struct UCategoryList_Type1_C_ClickListItem_Params
	{
	public:
		int32_t                                                    listIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CategoryList_Type1.CategoryList_Type1_C.UpdateClickListItem
	 */
	struct UCategoryList_Type1_C_UpdateClickListItem_Params
	{
	public:
		int32_t                                                    listIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CategoryList_Type1.CategoryList_Type1_C.UnSelectListItem
	 */
	struct UCategoryList_Type1_C_UnSelectListItem_Params
	{	};

	/**
	 * Function CategoryList_Type1.CategoryList_Type1_C.ExecuteUbergraph_CategoryList_Type1
	 */
	struct UCategoryList_Type1_C_ExecuteUbergraph_CategoryList_Type1_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CategoryList_Type1.CategoryList_Type1_C.CategoryChanged__DelegateSignature
	 */
	struct UCategoryList_Type1_C_CategoryChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    ItemIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
