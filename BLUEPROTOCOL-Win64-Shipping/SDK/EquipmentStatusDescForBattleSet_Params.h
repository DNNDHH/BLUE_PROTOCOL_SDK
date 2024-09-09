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
	 * Function EquipmentStatusDescForBattleSet.EquipmentStatusDescForBattleSet_C.SetEquipType
	 */
	struct UEquipmentStatusDescForBattleSet_C_SetEquipType_Params
	{
	public:
		ESBCharaEquipType                                          InEquipType;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EquipmentStatusDescForBattleSet.EquipmentStatusDescForBattleSet_C.SetImagineRemoveBtnVisibility
	 */
	struct UEquipmentStatusDescForBattleSet_C_SetImagineRemoveBtnVisibility_Params
	{
	public:
		bool                                                       InIsVisible;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EquipmentStatusDescForBattleSet.EquipmentStatusDescForBattleSet_C.SwitchBaseBgType
	 */
	struct UEquipmentStatusDescForBattleSet_C_SwitchBaseBgType_Params
	{
	public:
		bool                                                       InIsNormalType;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EquipmentStatusDescForBattleSet.EquipmentStatusDescForBattleSet_C.SetDescToDefault
	 */
	struct UEquipmentStatusDescForBattleSet_C_SetDescToDefault_Params
	{
	public:
		bool                                                       InIsDescDefault;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EquipmentStatusDescForBattleSet.EquipmentStatusDescForBattleSet_C.SetEquipmentModelCaptureImageVisibility
	 */
	struct UEquipmentStatusDescForBattleSet_C_SetEquipmentModelCaptureImageVisibility_Params
	{
	public:
		bool                                                       InIsVisible;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EquipmentStatusDescForBattleSet.EquipmentStatusDescForBattleSet_C.SetStorageMode
	 */
	struct UEquipmentStatusDescForBattleSet_C_SetStorageMode_Params
	{
	public:
		bool                                                       InIsForStorage;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YVBD[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function EquipmentStatusDescForBattleSet.EquipmentStatusDescForBattleSet_C.SetInfoType
	 */
	struct UEquipmentStatusDescForBattleSet_C_SetInfoType_Params
	{
	public:
		E_BattleSetInfoType                                        InInfoType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EquipmentStatusDescForBattleSet.EquipmentStatusDescForBattleSet_C.SwitchDescType
	 */
	struct UEquipmentStatusDescForBattleSet_C_SwitchDescType_Params
	{
	public:
		bool                                                       InIsDescDefault;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EquipmentStatusDescForBattleSet.EquipmentStatusDescForBattleSet_C.SetUsingEquipmentImage2Dor3D
	 */
	struct UEquipmentStatusDescForBattleSet_C_SetUsingEquipmentImage2Dor3D_Params
	{
	public:
		bool                                                       InUse3D;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EquipmentStatusDescForBattleSet.EquipmentStatusDescForBattleSet_C.SwitchStatusType
	 */
	struct UEquipmentStatusDescForBattleSet_C_SwitchStatusType_Params
	{
	public:
		int32_t                                                    InStatusTypeId;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EquipmentStatusDescForBattleSet.EquipmentStatusDescForBattleSet_C.UpdateImagineDesc
	 */
	struct UEquipmentStatusDescForBattleSet_C_UpdateImagineDesc_Params
	{
	public:
		class FString                                              inImagineUniqueId;                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function EquipmentStatusDescForBattleSet.EquipmentStatusDescForBattleSet_C.UpdateWeaponDesc
	 */
	struct UEquipmentStatusDescForBattleSet_C_UpdateWeaponDesc_Params
	{
	public:
		class FString                                              InWeaponUniqueId;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function EquipmentStatusDescForBattleSet.EquipmentStatusDescForBattleSet_C.UpdateDesc
	 */
	struct UEquipmentStatusDescForBattleSet_C_UpdateDesc_Params
	{
	public:
		class FString                                              InEquipmentUniqueId;                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function EquipmentStatusDescForBattleSet.EquipmentStatusDescForBattleSet_C.PreConstruct
	 */
	struct UEquipmentStatusDescForBattleSet_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EquipmentStatusDescForBattleSet.EquipmentStatusDescForBattleSet_C.Construct
	 */
	struct UEquipmentStatusDescForBattleSet_C_Construct_Params
	{	};

	/**
	 * Function EquipmentStatusDescForBattleSet.EquipmentStatusDescForBattleSet_C.BndEvt__EquipmentStatusDescForBattleSet_ImagineRemoveBtn_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
	 */
	struct UEquipmentStatusDescForBattleSet_C_BndEvt__EquipmentStatusDescForBattleSet_ImagineRemoveBtn_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function EquipmentStatusDescForBattleSet.EquipmentStatusDescForBattleSet_C.ExecuteUbergraph_EquipmentStatusDescForBattleSet
	 */
	struct UEquipmentStatusDescForBattleSet_C_ExecuteUbergraph_EquipmentStatusDescForBattleSet_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EquipmentStatusDescForBattleSet.EquipmentStatusDescForBattleSet_C.OnImagineRemoveBtnPressed__DelegateSignature
	 */
	struct UEquipmentStatusDescForBattleSet_C_OnImagineRemoveBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function EquipmentStatusDescForBattleSet.EquipmentStatusDescForBattleSet_C.OnRequestBattleImagineModelLoad__DelegateSignature
	 */
	struct UEquipmentStatusDescForBattleSet_C_OnRequestBattleImagineModelLoad__DelegateSignature_Params
	{
	public:
		struct FInventoryItemData                                  InBattleImagineInventoryItemData;                        // 0x0000(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function EquipmentStatusDescForBattleSet.EquipmentStatusDescForBattleSet_C.OnRequestWeaponModelLoad__DelegateSignature
	 */
	struct UEquipmentStatusDescForBattleSet_C_OnRequestWeaponModelLoad__DelegateSignature_Params
	{
	public:
		struct FInventoryItemData                                  InWeaponInventoryItemData;                               // 0x0000(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
