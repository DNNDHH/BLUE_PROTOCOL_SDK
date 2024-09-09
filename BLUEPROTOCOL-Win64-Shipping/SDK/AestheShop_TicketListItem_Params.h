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
	 * Function AestheShop_TicketListItem.AestheShop_TicketListItem_C.SetCourseFreePassMode
	 */
	struct UAestheShop_TicketListItem_C_SetCourseFreePassMode_Params
	{
	public:
		bool                                                       bInIsCourseFreePass;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AestheShop_TicketListItem.AestheShop_TicketListItem_C.GetCourseId
	 */
	struct UAestheShop_TicketListItem_C_GetCourseId_Params
	{
	public:
		int32_t                                                    OutCourseId;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AestheShop_TicketListItem.AestheShop_TicketListItem_C.GetHoldTicketTokenAmount
	 */
	struct UAestheShop_TicketListItem_C_GetHoldTicketTokenAmount_Params
	{
	public:
		int32_t                                                    OutAmount;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AestheShop_TicketListItem.AestheShop_TicketListItem_C.GetTicketTokenId
	 */
	struct UAestheShop_TicketListItem_C_GetTicketTokenId_Params
	{
	public:
		int32_t                                                    OutTIcketTokenId;                                        // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AestheShop_TicketListItem.AestheShop_TicketListItem_C.SetListItemSelected
	 */
	struct UAestheShop_TicketListItem_C_SetListItemSelected_Params
	{
	public:
		bool                                                       IsSelected;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7MZN[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function AestheShop_TicketListItem.AestheShop_TicketListItem_C.SetTicketAmount
	 */
	struct UAestheShop_TicketListItem_C_SetTicketAmount_Params
	{
	public:
		int32_t                                                    InAmount;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AestheShop_TicketListItem.AestheShop_TicketListItem_C.SetTicketName
	 */
	struct UAestheShop_TicketListItem_C_SetTicketName_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function AestheShop_TicketListItem.AestheShop_TicketListItem_C.SetCourseName
	 */
	struct UAestheShop_TicketListItem_C_SetCourseName_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function AestheShop_TicketListItem.AestheShop_TicketListItem_C.SetCourseIcon
	 */
	struct UAestheShop_TicketListItem_C_SetCourseIcon_Params
	{
	public:
		unsigned char                                              UnknownData_CFGZ[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function AestheShop_TicketListItem.AestheShop_TicketListItem_C.SetupCourseListItem
	 */
	struct UAestheShop_TicketListItem_C_SetupCourseListItem_Params
	{
	public:
		int32_t                                                    InCourseId;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InHoldTicketTokenAmount;                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AestheShop_TicketListItem.AestheShop_TicketListItem_C.PreConstruct
	 */
	struct UAestheShop_TicketListItem_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AestheShop_TicketListItem.AestheShop_TicketListItem_C.Construct
	 */
	struct UAestheShop_TicketListItem_C_Construct_Params
	{	};

	/**
	 * Function AestheShop_TicketListItem.AestheShop_TicketListItem_C.BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UAestheShop_TicketListItem_C_BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function AestheShop_TicketListItem.AestheShop_TicketListItem_C.ExecuteUbergraph_AestheShop_TicketListItem
	 */
	struct UAestheShop_TicketListItem_C_ExecuteUbergraph_AestheShop_TicketListItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AestheShop_TicketListItem.AestheShop_TicketListItem_C.OnSelected__DelegateSignature
	 */
	struct UAestheShop_TicketListItem_C_OnSelected__DelegateSignature_Params
	{
	public:
		int32_t                                                    InCourseId;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InTicketTokenId;                                         // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InHoldTicketTokenAmount;                                 // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
