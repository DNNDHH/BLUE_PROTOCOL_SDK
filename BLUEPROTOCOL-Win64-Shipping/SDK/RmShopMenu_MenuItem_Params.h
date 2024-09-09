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
	 * Function RmShopMenu_MenuItem.RmShopMenu_MenuItem_C.SelectBtn
	 */
	struct URmShopMenu_MenuItem_C_SelectBtn_Params
	{
	public:
		bool                                                       bSelected;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0145[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function RmShopMenu_MenuItem.RmShopMenu_MenuItem_C.PreConstruct
	 */
	struct URmShopMenu_MenuItem_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RmShopMenu_MenuItem.RmShopMenu_MenuItem_C.Construct
	 */
	struct URmShopMenu_MenuItem_C_Construct_Params
	{	};

	/**
	 * Function RmShopMenu_MenuItem.RmShopMenu_MenuItem_C.BndEvt__BtnHit_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 */
	struct URmShopMenu_MenuItem_C_BndEvt__BtnHit_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function RmShopMenu_MenuItem.RmShopMenu_MenuItem_C.Destruct
	 */
	struct URmShopMenu_MenuItem_C_Destruct_Params
	{	};

	/**
	 * Function RmShopMenu_MenuItem.RmShopMenu_MenuItem_C.OnUpdateSeasonPassAnyInfo
	 */
	struct URmShopMenu_MenuItem_C_OnUpdateSeasonPassAnyInfo_Params
	{
	public:
		class UObject*                                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Param;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RmShopMenu_MenuItem.RmShopMenu_MenuItem_C.UpdateSeasonPassFlag
	 */
	struct URmShopMenu_MenuItem_C_UpdateSeasonPassFlag_Params
	{	};

	/**
	 * Function RmShopMenu_MenuItem.RmShopMenu_MenuItem_C.ExecuteUbergraph_RmShopMenu_MenuItem
	 */
	struct URmShopMenu_MenuItem_C_ExecuteUbergraph_RmShopMenu_MenuItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RmShopMenu_MenuItem.RmShopMenu_MenuItem_C.OnClicked__DelegateSignature
	 */
	struct URmShopMenu_MenuItem_C_OnClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
