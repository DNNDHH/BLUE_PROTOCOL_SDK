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
	 * Function MountShortcutIcon.MountShortcutIcon_C.CheckSwitchIndex
	 */
	struct UMountShortcutIcon_C_CheckSwitchIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Result;                                                  // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VMJK[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MountShortcutIcon.MountShortcutIcon_C.SetSwitch
	 */
	struct UMountShortcutIcon_C_SetSwitch_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MountShortcutIcon.MountShortcutIcon_C.PlayAnimInOut
	 */
	struct UMountShortcutIcon_C_PlayAnimInOut_Params
	{
	public:
		bool                                                       bin;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YFQU[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MountShortcutIcon.MountShortcutIcon_C.UpdateIconTexture
	 */
	struct UMountShortcutIcon_C_UpdateIconTexture_Params
	{	};

	/**
	 * Function MountShortcutIcon.MountShortcutIcon_C.PlayAnimChargeEnd
	 */
	struct UMountShortcutIcon_C_PlayAnimChargeEnd_Params
	{	};

	/**
	 * Function MountShortcutIcon.MountShortcutIcon_C.UpdateKeyText
	 */
	struct UMountShortcutIcon_C_UpdateKeyText_Params
	{	};

	/**
	 * Function MountShortcutIcon.MountShortcutIcon_C.UpdateInterval
	 */
	struct UMountShortcutIcon_C_UpdateInterval_Params
	{	};

	/**
	 * Function MountShortcutIcon.MountShortcutIcon_C.BndEvt__MountShortcutIcon_txtKey_K2Node_ComponentBoundEvent_0_OnUpdateOperationMode__DelegateSignature
	 */
	struct UMountShortcutIcon_C_BndEvt__MountShortcutIcon_txtKey_K2Node_ComponentBoundEvent_0_OnUpdateOperationMode__DelegateSignature_Params
	{	};

	/**
	 * Function MountShortcutIcon.MountShortcutIcon_C.BndEvt__MountShortcutIcon_txtKey_K2Node_ComponentBoundEvent_1_OnChangePadSkinType__DelegateSignature
	 */
	struct UMountShortcutIcon_C_BndEvt__MountShortcutIcon_txtKey_K2Node_ComponentBoundEvent_1_OnChangePadSkinType__DelegateSignature_Params
	{	};

	/**
	 * Function MountShortcutIcon.MountShortcutIcon_C.BndEvt__MountShortcutIcon_txtKey_K2Node_ComponentBoundEvent_2_OnUpdateKeyConfig__DelegateSignature
	 */
	struct UMountShortcutIcon_C_BndEvt__MountShortcutIcon_txtKey_K2Node_ComponentBoundEvent_2_OnUpdateKeyConfig__DelegateSignature_Params
	{	};

	/**
	 * Function MountShortcutIcon.MountShortcutIcon_C.Construct
	 */
	struct UMountShortcutIcon_C_Construct_Params
	{	};

	/**
	 * Function MountShortcutIcon.MountShortcutIcon_C.Tick
	 */
	struct UMountShortcutIcon_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MountShortcutIcon.MountShortcutIcon_C.Destruct
	 */
	struct UMountShortcutIcon_C_Destruct_Params
	{	};

	/**
	 * Function MountShortcutIcon.MountShortcutIcon_C.ExecuteUbergraph_MountShortcutIcon
	 */
	struct UMountShortcutIcon_C_ExecuteUbergraph_MountShortcutIcon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
