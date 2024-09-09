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
	 * Function LibraryMenu_AchievementFunctionLibrary.LibraryMenu_AchievementFunctionLibrary_C.SetLibraryAchievementCategory_AdventureBoard
	 */
	struct ULibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_AdventureBoard_Params
	{
	public:
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_AchievementFunctionLibrary.LibraryMenu_AchievementFunctionLibrary_C.SetLibraryAchievementCategory_Assets
	 */
	struct ULibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Assets_Params
	{
	public:
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_AchievementFunctionLibrary.LibraryMenu_AchievementFunctionLibrary_C.SetLibraryAchievementCategory_Life
	 */
	struct ULibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Life_Params
	{
	public:
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_AchievementFunctionLibrary.LibraryMenu_AchievementFunctionLibrary_C.SetLibraryAchievementCategory_Communication
	 */
	struct ULibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Communication_Params
	{
	public:
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_AchievementFunctionLibrary.LibraryMenu_AchievementFunctionLibrary_C.SetLibraryAchievementCategory_Quest
	 */
	struct ULibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Quest_Params
	{
	public:
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_AchievementFunctionLibrary.LibraryMenu_AchievementFunctionLibrary_C.SetLibraryAchievementCategory_Class
	 */
	struct ULibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Class_Params
	{
	public:
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_AchievementFunctionLibrary.LibraryMenu_AchievementFunctionLibrary_C.SetLibraryAchievementCategory_Status
	 */
	struct ULibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Status_Params
	{
	public:
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_AchievementFunctionLibrary.LibraryMenu_AchievementFunctionLibrary_C.IsTermIdData
	 */
	struct ULibraryMenu_AchievementFunctionLibrary_C_IsTermIdData_Params
	{
	public:
		class FString                                              InTermId;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsTermData;                                              // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Q6EA[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FSBEventTermsData>                           Terms;                                                   // 0x0020(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function LibraryMenu_AchievementFunctionLibrary.LibraryMenu_AchievementFunctionLibrary_C.CheckLimitedTime
	 */
	struct ULibraryMenu_AchievementFunctionLibrary_C_CheckLimitedTime_Params
	{
	public:
		struct FAchievementMasterData                              AchievementMasterData;                                   // 0x0000(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UObject*                                             __WorldContext;                                          // 0x0078(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Result;                                                  // 0x0080(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_T15K[0x7];                                   // 0x0081(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
