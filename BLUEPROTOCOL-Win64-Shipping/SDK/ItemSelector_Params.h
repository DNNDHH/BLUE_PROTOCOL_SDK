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
	 * Function ItemSelector.ItemSelector_C.OnUseItem
	 */
	struct UItemSelector_C_OnUseItem_Params
	{	};

	/**
	 * Function ItemSelector.ItemSelector_C.IsRegistItemForInventoryData
	 */
	struct UItemSelector_C_IsRegistItemForInventoryData_Params
	{
	public:
		struct FOwnItemInfo                                        InItemInfo;                                              // 0x0000(0x0150)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x0150(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2MS3[0x7];                                   // 0x0151(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ItemSelector.ItemSelector_C.OnPlaySECanNotUse
	 */
	struct UItemSelector_C_OnPlaySECanNotUse_Params
	{
	public:
		ESBItemUseStatus                                           InUseStatus;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_F8OT[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ItemSelector.ItemSelector_C.OnPlaySESelect
	 */
	struct UItemSelector_C_OnPlaySESelect_Params
	{	};

	/**
	 * Function ItemSelector.ItemSelector_C.SetupKeyTextRight
	 */
	struct UItemSelector_C_SetupKeyTextRight_Params
	{	};

	/**
	 * Function ItemSelector.ItemSelector_C.SetupKeyTextLeft
	 */
	struct UItemSelector_C_SetupKeyTextLeft_Params
	{	};

	/**
	 * Function ItemSelector.ItemSelector_C.SetupKeyTextUse
	 */
	struct UItemSelector_C_SetupKeyTextUse_Params
	{	};

	/**
	 * Function ItemSelector.ItemSelector_C.OnHiddenCoolTime
	 */
	struct UItemSelector_C_OnHiddenCoolTime_Params
	{	};

	/**
	 * Function ItemSelector.ItemSelector_C.OnShowCoolTime
	 */
	struct UItemSelector_C_OnShowCoolTime_Params
	{	};

	/**
	 * Function ItemSelector.ItemSelector_C.OnTerminate
	 */
	struct UItemSelector_C_OnTerminate_Params
	{	};

	/**
	 * Function ItemSelector.ItemSelector_C.OnInitialize
	 */
	struct UItemSelector_C_OnInitialize_Params
	{	};

	/**
	 * Function ItemSelector.ItemSelector_C.OnUnbind
	 */
	struct UItemSelector_C_OnUnbind_Params
	{	};

	/**
	 * Function ItemSelector.ItemSelector_C.OnBind
	 */
	struct UItemSelector_C_OnBind_Params
	{	};

	/**
	 * Function ItemSelector.ItemSelector_C.DebugPrint
	 */
	struct UItemSelector_C_DebugPrint_Params
	{
	public:
		class FString                                              InStr;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		float                                                      Duration;                                                // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UNEF[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ItemSelector.ItemSelector_C.OnSaveItemLock
	 */
	struct UItemSelector_C_OnSaveItemLock_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_P6DM[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FSBLockItemData>                             LockItemData;                                            // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    InRetCode;                                               // 0x0018(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ItemSelector.ItemSelector_C.BindSaveItemLock
	 */
	struct UItemSelector_C_BindSaveItemLock_Params
	{	};

	/**
	 * Function ItemSelector.ItemSelector_C.UnbindSaveItemLock
	 */
	struct UItemSelector_C_UnbindSaveItemLock_Params
	{	};

	/**
	 * Function ItemSelector.ItemSelector_C.BindSaveItemStorage
	 */
	struct UItemSelector_C_BindSaveItemStorage_Params
	{	};

	/**
	 * Function ItemSelector.ItemSelector_C.UnbindSaveItemStorage
	 */
	struct UItemSelector_C_UnbindSaveItemStorage_Params
	{	};

	/**
	 * Function ItemSelector.ItemSelector_C.OnSaveItemStorage
	 */
	struct UItemSelector_C_OnSaveItemStorage_Params
	{
	public:
		int32_t                                                    InRetCode;                                               // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HOQ0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FOwnItemInfo>                                InDirtyItems;                                            // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ItemSelector.ItemSelector_C.OnOwnItemChangeAmount
	 */
	struct UItemSelector_C_OnOwnItemChangeAmount_Params
	{
	public:
		struct FSBChangeItemAmountParam                            InParam;                                                 // 0x0000(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ItemSelector.ItemSelector_C.BindOwnItemChangeAmount
	 */
	struct UItemSelector_C_BindOwnItemChangeAmount_Params
	{	};

	/**
	 * Function ItemSelector.ItemSelector_C.UnbindOwnItemChangeAmount
	 */
	struct UItemSelector_C_UnbindOwnItemChangeAmount_Params
	{	};

	/**
	 * Function ItemSelector.ItemSelector_C.EventOnUseSupply
	 */
	struct UItemSelector_C_EventOnUseSupply_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ItemSelector.ItemSelector_C.BindUseSupply
	 */
	struct UItemSelector_C_BindUseSupply_Params
	{	};

	/**
	 * Function ItemSelector.ItemSelector_C.UnbindUseSupply
	 */
	struct UItemSelector_C_UnbindUseSupply_Params
	{	};

	/**
	 * Function ItemSelector.ItemSelector_C.BindClassLevelUp
	 */
	struct UItemSelector_C_BindClassLevelUp_Params
	{	};

	/**
	 * Function ItemSelector.ItemSelector_C.UnbindClassLevelUp
	 */
	struct UItemSelector_C_UnbindClassLevelUp_Params
	{	};

	/**
	 * Function ItemSelector.ItemSelector_C.CustomEvent_2
	 */
	struct UItemSelector_C_CustomEvent_2_Params
	{
	public:
		class UObject*                                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Param;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ItemSelector.ItemSelector_C.BindPlayerClassChange
	 */
	struct UItemSelector_C_BindPlayerClassChange_Params
	{	};

	/**
	 * Function ItemSelector.ItemSelector_C.UnbindPlayerClassChange
	 */
	struct UItemSelector_C_UnbindPlayerClassChange_Params
	{	};

	/**
	 * Function ItemSelector.ItemSelector_C.CustomEvent_4
	 */
	struct UItemSelector_C_CustomEvent_4_Params
	{
	public:
		class UObject*                                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Param;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ItemSelector.ItemSelector_C.BindUpdateShortcut
	 */
	struct UItemSelector_C_BindUpdateShortcut_Params
	{	};

	/**
	 * Function ItemSelector.ItemSelector_C.UnbindUpdateShortcut
	 */
	struct UItemSelector_C_UnbindUpdateShortcut_Params
	{	};

	/**
	 * Function ItemSelector.ItemSelector_C.CustomEvent_5
	 */
	struct UItemSelector_C_CustomEvent_5_Params
	{
	public:
		class UObject*                                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Param;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ItemSelector.ItemSelector_C.BndEvt__ItemSelector_TextLeft_K2Node_ComponentBoundEvent_0_OnUpdateOperationMode__DelegateSignature
	 */
	struct UItemSelector_C_BndEvt__ItemSelector_TextLeft_K2Node_ComponentBoundEvent_0_OnUpdateOperationMode__DelegateSignature_Params
	{	};

	/**
	 * Function ItemSelector.ItemSelector_C.BndEvt__ItemSelector_TextLeft_K2Node_ComponentBoundEvent_1_OnChangePadSkinType__DelegateSignature
	 */
	struct UItemSelector_C_BndEvt__ItemSelector_TextLeft_K2Node_ComponentBoundEvent_1_OnChangePadSkinType__DelegateSignature_Params
	{	};

	/**
	 * Function ItemSelector.ItemSelector_C.BndEvt__ItemSelector_TextLeft_K2Node_ComponentBoundEvent_2_OnUpdateKeyConfig__DelegateSignature
	 */
	struct UItemSelector_C_BndEvt__ItemSelector_TextLeft_K2Node_ComponentBoundEvent_2_OnUpdateKeyConfig__DelegateSignature_Params
	{	};

	/**
	 * Function ItemSelector.ItemSelector_C.BndEvt__ItemSelector_TextRight_K2Node_ComponentBoundEvent_3_OnUpdateOperationMode__DelegateSignature
	 */
	struct UItemSelector_C_BndEvt__ItemSelector_TextRight_K2Node_ComponentBoundEvent_3_OnUpdateOperationMode__DelegateSignature_Params
	{	};

	/**
	 * Function ItemSelector.ItemSelector_C.BndEvt__ItemSelector_TextRight_K2Node_ComponentBoundEvent_4_OnChangePadSkinType__DelegateSignature
	 */
	struct UItemSelector_C_BndEvt__ItemSelector_TextRight_K2Node_ComponentBoundEvent_4_OnChangePadSkinType__DelegateSignature_Params
	{	};

	/**
	 * Function ItemSelector.ItemSelector_C.BndEvt__ItemSelector_TextRight_K2Node_ComponentBoundEvent_5_OnUpdateKeyConfig__DelegateSignature
	 */
	struct UItemSelector_C_BndEvt__ItemSelector_TextRight_K2Node_ComponentBoundEvent_5_OnUpdateKeyConfig__DelegateSignature_Params
	{	};

	/**
	 * Function ItemSelector.ItemSelector_C.BndEvt__ItemSelector_TextUse_K2Node_ComponentBoundEvent_6_OnUpdateOperationMode__DelegateSignature
	 */
	struct UItemSelector_C_BndEvt__ItemSelector_TextUse_K2Node_ComponentBoundEvent_6_OnUpdateOperationMode__DelegateSignature_Params
	{	};

	/**
	 * Function ItemSelector.ItemSelector_C.BndEvt__ItemSelector_TextUse_K2Node_ComponentBoundEvent_7_OnChangePadSkinType__DelegateSignature
	 */
	struct UItemSelector_C_BndEvt__ItemSelector_TextUse_K2Node_ComponentBoundEvent_7_OnChangePadSkinType__DelegateSignature_Params
	{	};

	/**
	 * Function ItemSelector.ItemSelector_C.BndEvt__ItemSelector_TextUse_K2Node_ComponentBoundEvent_8_OnUpdateKeyConfig__DelegateSignature
	 */
	struct UItemSelector_C_BndEvt__ItemSelector_TextUse_K2Node_ComponentBoundEvent_8_OnUpdateKeyConfig__DelegateSignature_Params
	{	};

	/**
	 * Function ItemSelector.ItemSelector_C.BindEndCoolTime
	 */
	struct UItemSelector_C_BindEndCoolTime_Params
	{
	public:
		class UShortcutCoolTime_C*                                 CoolTimeWidget;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ItemSelector.ItemSelector_C.UnbindEndCoolTime
	 */
	struct UItemSelector_C_UnbindEndCoolTime_Params
	{
	public:
		class UShortcutCoolTime_C*                                 CoolTimeWidget;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ItemSelector.ItemSelector_C.EventSetupList
	 */
	struct UItemSelector_C_EventSetupList_Params
	{	};

	/**
	 * Function ItemSelector.ItemSelector_C.ExecuteUbergraph_ItemSelector
	 */
	struct UItemSelector_C_ExecuteUbergraph_ItemSelector_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
