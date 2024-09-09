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
	 * WidgetBlueprintGeneratedClass Effect_Container.Effect_Container_C
	 * Size -> 0x0018 (FullSize[0x0290] - InheritedSize[0x0278])
	 */
	class UEffect_Container_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USwitchingTitle_C*                                   Effect_ContainerTab;                                     // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        VB_Ability;                                              // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void SetTitle(const class FName& InTextId);
		class FString GetTooltipText(class USBWarehouseAbilityComponent* WarehouseAbilityComponent, int32_t ID);
		int32_t GetValue(int32_t RecepiId);
		void CreateEffectActiveWidget(const struct FSBWarehouseAbilityListUIInfo& SBWarehouseAbilityListUIInfo, class USBWarehouseAbilityComponent* WarehouseAbilityComponent, bool IsShowTooltip, bool IsShowValue);
		void SetEffectList(const class FName& MapId, const struct FPioneerAbilityList& PioneerAbilityList, class USBWarehouseAbilityComponent* WarehouseAbilityComponent, bool IsShowTooltip, bool IsShowValue);
		void BndEvt__Effect_Container_Effect_ContainerTab_K2Node_ComponentBoundEvent_0_OnEventSwitchingTitle__DelegateSignature(bool IsOpen);
		void ExecuteUbergraph_Effect_Container(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
