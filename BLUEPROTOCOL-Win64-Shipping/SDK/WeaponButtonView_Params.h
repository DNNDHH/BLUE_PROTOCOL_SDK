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
	 * Function WeaponButtonView.WeaponButtonView_C.SetTextMaxColor
	 */
	struct UWeaponButtonView_C_SetTextMaxColor_Params
	{
	public:
		class UTextBlock*                                          Text;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       BMax;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeaponButtonView.WeaponButtonView_C.SetAbility
	 */
	struct UWeaponButtonView_C_SetAbility_Params
	{
	public:
		struct FOwnItemInfo                                        OwnItem;                                                 // 0x0000(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WeaponButtonView.WeaponButtonView_C.ApplyWeaponStatus
	 */
	struct UWeaponButtonView_C_ApplyWeaponStatus_Params
	{
	public:
		struct FOwnItemInfo                                        WeaponData;                                              // 0x0000(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WeaponButtonView.WeaponButtonView_C.ApplySelectWeapon
	 */
	struct UWeaponButtonView_C_ApplySelectWeapon_Params
	{
	public:
		struct FOwnItemInfo                                        OwnItemInfo;                                             // 0x0000(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WeaponButtonView.WeaponButtonView_C.OnLoaded_3A96932F4BF4231E1AB840A7261D0FEA
	 */
	struct UWeaponButtonView_C_OnLoaded_3A96932F4BF4231E1AB840A7261D0FEA_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WeaponButtonView.WeaponButtonView_C.RequestLoadImage
	 */
	struct UWeaponButtonView_C_RequestLoadImage_Params
	{
	public:
		struct FOwnItemInfo                                        OwnItemInfo;                                             // 0x0000(0x0150)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WeaponButtonView.WeaponButtonView_C.BndEvt__WeaponButtonView_BtnReselect_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
	 */
	struct UWeaponButtonView_C_BndEvt__WeaponButtonView_BtnReselect_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WeaponButtonView.WeaponButtonView_C.ExecuteUbergraph_WeaponButtonView
	 */
	struct UWeaponButtonView_C_ExecuteUbergraph_WeaponButtonView_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SNFW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WeaponButtonView.WeaponButtonView_C.OnClicked__DelegateSignature
	 */
	struct UWeaponButtonView_C_OnClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
