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
	 * Function CommonPagerWidget.CommonPagerWidget_C.SetBtnEnable
	 */
	struct UCommonPagerWidget_C_SetBtnEnable_Params
	{
	public:
		bool                                                       Fowerd;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommonPagerWidget.CommonPagerWidget_C.BndEvt__Back_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct UCommonPagerWidget_C_BndEvt__Back_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CommonPagerWidget.CommonPagerWidget_C.BndEvt__Fowerd_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature
	 */
	struct UCommonPagerWidget_C_BndEvt__Fowerd_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CommonPagerWidget.CommonPagerWidget_C.InitializePage
	 */
	struct UCommonPagerWidget_C_InitializePage_Params
	{
	public:
		int32_t                                                    PageCurrent;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    PageMin;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    PageMax;                                                 // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonPagerWidget.CommonPagerWidget_C.UpdetaPage
	 */
	struct UCommonPagerWidget_C_UpdetaPage_Params
	{	};

	/**
	 * Function CommonPagerWidget.CommonPagerWidget_C.ExecuteUbergraph_CommonPagerWidget
	 */
	struct UCommonPagerWidget_C_ExecuteUbergraph_CommonPagerWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonPagerWidget.CommonPagerWidget_C.OnPageChange__DelegateSignature
	 */
	struct UCommonPagerWidget_C_OnPageChange__DelegateSignature_Params
	{
	public:
		int32_t                                                    PageCurrent;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
