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
	 * Function EventShopTabBox_Banner.EventShopTabBox_Banner_C.SetNewIcon
	 */
	struct UEventShopTabBox_Banner_C_SetNewIcon_Params
	{
	public:
		bool                                                       IsNew;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EventShopTabBox_Banner.EventShopTabBox_Banner_C.GetBannerTexture
	 */
	struct UEventShopTabBox_Banner_C_GetBannerTexture_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NBRD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		unsigned char                                              UnknownData_SP4V[0x2C];                                  // 0x0004(0x002C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function EventShopTabBox_Banner.EventShopTabBox_Banner_C.SetEventInfo
	 */
	struct UEventShopTabBox_Banner_C_SetEventInfo_Params
	{
	public:
		int32_t                                                    EventId;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EventShopTabBox_Banner.EventShopTabBox_Banner_C.SetBtnSelected
	 */
	struct UEventShopTabBox_Banner_C_SetBtnSelected_Params
	{
	public:
		bool                                                       IsSelect;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EventShopTabBox_Banner.EventShopTabBox_Banner_C.OnLoaded_F1FE58E8472CCC30C94EBB842B2CECF6
	 */
	struct UEventShopTabBox_Banner_C_OnLoaded_F1FE58E8472CCC30C94EBB842B2CECF6_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EventShopTabBox_Banner.EventShopTabBox_Banner_C.BndEvt__SBBtn_Hit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UEventShopTabBox_Banner_C_BndEvt__SBBtn_Hit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function EventShopTabBox_Banner.EventShopTabBox_Banner_C.BndEvt__SBBtn_Hit_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UEventShopTabBox_Banner_C_BndEvt__SBBtn_Hit_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function EventShopTabBox_Banner.EventShopTabBox_Banner_C.BndEvt__SBBtn_Hit_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UEventShopTabBox_Banner_C_BndEvt__SBBtn_Hit_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function EventShopTabBox_Banner.EventShopTabBox_Banner_C.LoadTexture2D
	 */
	struct UEventShopTabBox_Banner_C_LoadTexture2D_Params
	{	};

	/**
	 * Function EventShopTabBox_Banner.EventShopTabBox_Banner_C.ExecuteUbergraph_EventShopTabBox_Banner
	 */
	struct UEventShopTabBox_Banner_C_ExecuteUbergraph_EventShopTabBox_Banner_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_38WA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function EventShopTabBox_Banner.EventShopTabBox_Banner_C.OnUnhovered__DelegateSignature
	 */
	struct UEventShopTabBox_Banner_C_OnUnhovered__DelegateSignature_Params
	{	};

	/**
	 * Function EventShopTabBox_Banner.EventShopTabBox_Banner_C.OnHovered__DelegateSignature
	 */
	struct UEventShopTabBox_Banner_C_OnHovered__DelegateSignature_Params
	{	};

	/**
	 * Function EventShopTabBox_Banner.EventShopTabBox_Banner_C.OnClicked__DelegateSignature
	 */
	struct UEventShopTabBox_Banner_C_OnClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
