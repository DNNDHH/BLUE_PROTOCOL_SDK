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
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass StatusTypeSwitchBtnForBattleSet.StatusTypeSwitchBtnForBattleSet_C
	 * Size -> 0x0044 (FullSize[0x02BC] - InheritedSize[0x0278])
	 */
	class UStatusTypeSwitchBtnForBattleSet_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USizeBox*                                            SizeBoxForSwitchBtn1_3;                                  // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnBtn23_C*                                         SwitchBtn1;                                              // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnBtn23_C*                                         SwitchBtn1_3;                                            // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnBtn23_C*                                         SwitchBtn2;                                              // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		E_BattleSetInfoType                                        InfoType;                                                // 0x02A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_Z7KX[0x7];                                   // 0x02A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnSwitchBtnPressed;                                      // 0x02A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    SelectedSwitchBtnId;                                     // 0x02B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetSelectedSwitchBtn(int32_t InSelectedSwitchBtnId);
		void SetInfoType(E_BattleSetInfoType InInfoType);
		void PreConstruct(bool IsDesignTime);
		void BndEvt__MyCharaMenu_StatusTypeSwitchBtn_SwitchBtn1_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature();
		void BndEvt__MyCharaMenu_StatusTypeSwitchBtn_SwitchBtn2_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature();
		void BndEvt__StatusTypeSwitchBtnForBattleSet_SwitchBtn1_1_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature();
		void ExecuteUbergraph_StatusTypeSwitchBtnForBattleSet(int32_t EntryPoint);
		void OnSwitchBtnPressed__DelegateSignature(int32_t InPressedSwitchBtnId);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
