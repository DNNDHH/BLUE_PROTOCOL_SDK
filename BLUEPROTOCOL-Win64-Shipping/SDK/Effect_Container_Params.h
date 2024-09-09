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
	 * Function Effect_Container.Effect_Container_C.SetTitle
	 */
	struct UEffect_Container_C_SetTitle_Params
	{
	public:
		class FName                                                InTextId;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Effect_Container.Effect_Container_C.GetTooltipText
	 */
	struct UEffect_Container_C_GetTooltipText_Params
	{
	public:
		class USBWarehouseAbilityComponent*                        WarehouseAbilityComponent;                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ID;                                                      // 0x0008(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_E1U8[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function Effect_Container.Effect_Container_C.GetValue
	 */
	struct UEffect_Container_C_GetValue_Params
	{
	public:
		int32_t                                                    RecepiId;                                                // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Effect_Container.Effect_Container_C.CreateEffectActiveWidget
	 */
	struct UEffect_Container_C_CreateEffectActiveWidget_Params
	{
	public:
		struct FSBWarehouseAbilityListUIInfo                       SBWarehouseAbilityListUIInfo;                            // 0x0000(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class USBWarehouseAbilityComponent*                        WarehouseAbilityComponent;                               // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsShowTooltip;                                           // 0x0030(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsShowValue;                                             // 0x0031(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_K179[0x6];                                   // 0x0032(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Effect_Container.Effect_Container_C.SetEffectList
	 */
	struct UEffect_Container_C_SetEffectList_Params
	{
	public:
		class FName                                                MapId;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FPioneerAbilityList                                 PioneerAbilityList;                                      // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class USBWarehouseAbilityComponent*                        WarehouseAbilityComponent;                               // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsShowTooltip;                                           // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsShowValue;                                             // 0x0021(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QNL1[0x2];                                   // 0x0022(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Effect_Container.Effect_Container_C.BndEvt__Effect_Container_Effect_ContainerTab_K2Node_ComponentBoundEvent_0_OnEventSwitchingTitle__DelegateSignature
	 */
	struct UEffect_Container_C_BndEvt__Effect_Container_Effect_ContainerTab_K2Node_ComponentBoundEvent_0_OnEventSwitchingTitle__DelegateSignature_Params
	{
	public:
		bool                                                       IsOpen;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Effect_Container.Effect_Container_C.ExecuteUbergraph_Effect_Container
	 */
	struct UEffect_Container_C_ExecuteUbergraph_Effect_Container_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
