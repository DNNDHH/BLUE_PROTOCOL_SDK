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
	 * Function LibraryMenu_AchievementList.LibraryMenu_AchievementList_C.SetAchievementTitle
	 */
	struct ULibraryMenu_AchievementList_C_SetAchievementTitle_Params
	{	};

	/**
	 * Function LibraryMenu_AchievementList.LibraryMenu_AchievementList_C.CheckItemListNewIcon
	 */
	struct ULibraryMenu_AchievementList_C_CheckItemListNewIcon_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1PC8[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LibraryMenu_AchievementList.LibraryMenu_AchievementList_C.SetItemListSelected
	 */
	struct ULibraryMenu_AchievementList_C_SetItemListSelected_Params
	{
	public:
		int32_t                                                    listIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bSelected;                                               // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_341S[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LibraryMenu_AchievementList.LibraryMenu_AchievementList_C.Construct
	 */
	struct ULibraryMenu_AchievementList_C_Construct_Params
	{	};

	/**
	 * Function LibraryMenu_AchievementList.LibraryMenu_AchievementList_C.ExecuteUbergraph_LibraryMenu_AchievementList
	 */
	struct ULibraryMenu_AchievementList_C_ExecuteUbergraph_LibraryMenu_AchievementList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_AchievementList.LibraryMenu_AchievementList_C.CategoryChanged__DelegateSignature
	 */
	struct ULibraryMenu_AchievementList_C_CategoryChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    ItemIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
