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
	 * Function AestheShop_TicketDescWindow.AestheShop_TicketDescWindow_C.SetCourseFreePassMode
	 */
	struct UAestheShop_TicketDescWindow_C_SetCourseFreePassMode_Params
	{
	public:
		bool                                                       bInIsCourseFreePass;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AestheShop_TicketDescWindow.AestheShop_TicketDescWindow_C.SetTicketTokenIconTexture
	 */
	struct UAestheShop_TicketDescWindow_C_SetTicketTokenIconTexture_Params
	{
	public:
		int32_t                                                    InTokenId;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_R848[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function AestheShop_TicketDescWindow.AestheShop_TicketDescWindow_C.UpdateAvailableCategoryIcons
	 */
	struct UAestheShop_TicketDescWindow_C_UpdateAvailableCategoryIcons_Params
	{
	public:
		struct FSBAestheShopCourseMasterData                       InAestheCourseMaster;                                    // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function AestheShop_TicketDescWindow.AestheShop_TicketDescWindow_C.SetHoldTicketNum
	 */
	struct UAestheShop_TicketDescWindow_C_SetHoldTicketNum_Params
	{
	public:
		int32_t                                                    InHoldTicketNum;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IBAH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function AestheShop_TicketDescWindow.AestheShop_TicketDescWindow_C.SetUseTicketNum
	 */
	struct UAestheShop_TicketDescWindow_C_SetUseTicketNum_Params
	{
	public:
		int32_t                                                    InUseTicketNum;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CUPQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function AestheShop_TicketDescWindow.AestheShop_TicketDescWindow_C.SetTicketName
	 */
	struct UAestheShop_TicketDescWindow_C_SetTicketName_Params
	{
	public:
		class FText                                                InTicketName;                                            // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function AestheShop_TicketDescWindow.AestheShop_TicketDescWindow_C.SetCourseDesc
	 */
	struct UAestheShop_TicketDescWindow_C_SetCourseDesc_Params
	{
	public:
		class FText                                                InCourseDesc;                                            // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function AestheShop_TicketDescWindow.AestheShop_TicketDescWindow_C.SetCourseName
	 */
	struct UAestheShop_TicketDescWindow_C_SetCourseName_Params
	{
	public:
		class FText                                                InNameText;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function AestheShop_TicketDescWindow.AestheShop_TicketDescWindow_C.SetCourseIconTexture
	 */
	struct UAestheShop_TicketDescWindow_C_SetCourseIconTexture_Params
	{
	public:
		unsigned char                                              UnknownData_BYN4[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function AestheShop_TicketDescWindow.AestheShop_TicketDescWindow_C.Setup
	 */
	struct UAestheShop_TicketDescWindow_C_Setup_Params
	{
	public:
		int32_t                                                    InCourseId;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XH9J[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FSBCharacterToken>                           InHoldTicketTokens;                                      // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function AestheShop_TicketDescWindow.AestheShop_TicketDescWindow_C.PreConstruct
	 */
	struct UAestheShop_TicketDescWindow_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AestheShop_TicketDescWindow.AestheShop_TicketDescWindow_C.ExecuteUbergraph_AestheShop_TicketDescWindow
	 */
	struct UAestheShop_TicketDescWindow_C_ExecuteUbergraph_AestheShop_TicketDescWindow_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
