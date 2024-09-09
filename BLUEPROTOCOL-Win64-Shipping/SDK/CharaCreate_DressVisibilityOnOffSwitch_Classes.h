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
	 * WidgetBlueprintGeneratedClass CharaCreate_DressVisibilityOnOffSwitch.CharaCreate_DressVisibilityOnOffSwitch_C
	 * Size -> 0x0031 (FullSize[0x02A9] - InheritedSize[0x0278])
	 */
	class UCharaCreate_DressVisibilityOnOffSwitch_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetSwitcher*                                     DressVisibilityControlBtnSwitcher;                       // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCharaCreate_DressVisibilitySwitchOff_C*             DressVisibilitySwitchOff;                                // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCharaCreate_DressVisibilitySwitchOn_C*              DressVisibilitySwitchOn;                                 // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnDressVisibilitySwitchClicked;                          // 0x0298(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       IsDressVisibilityOn;                                     // 0x02A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void SetActiveDressVisibilitySwitch(bool InIsDressVisibilitySwitchOnActive);
		void BndEvt__DressVisibilitySwitchOff_K2Node_ComponentBoundEvent_3_OnSwitchOffPressed__DelegateSignature();
		void BndEvt__DressVisibilitySwitchOn_K2Node_ComponentBoundEvent_4_OnSwitchOnPressed__DelegateSignature();
		void ExecuteUbergraph_CharaCreate_DressVisibilityOnOffSwitch(int32_t EntryPoint);
		void OnDressVisibilitySwitchClicked__DelegateSignature(bool InIsDressVisibilitySwitchOn);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
