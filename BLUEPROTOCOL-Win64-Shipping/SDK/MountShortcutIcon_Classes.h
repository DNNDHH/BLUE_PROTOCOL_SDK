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
	 * WidgetBlueprintGeneratedClass MountShortcutIcon.MountShortcutIcon_C
	 * Size -> 0x0046 (FullSize[0x02BE] - InheritedSize[0x0278])
	 */
	class UMountShortcutIcon_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    AnimInOut;                                               // 0x0280(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    AnimChargeEnd;                                           // 0x0288(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UImage*                                              Effect;                                                  // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Gauge1;                                                  // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     Switch1;                                                 // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBTextKeyIcon_C*                                    txtKey;                                                  // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            GaugeMat;                                                // 0x02B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WaitTime;                                                // 0x02B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIconIn;                                                 // 0x02BC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bInterval;                                               // 0x02BD(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void CheckSwitchIndex(int32_t Index, bool* Result);
		void SetSwitch(int32_t Index);
		void PlayAnimInOut(bool bin);
		void UpdateIconTexture();
		void PlayAnimChargeEnd();
		void UpdateKeyText();
		void UpdateInterval();
		void BndEvt__MountShortcutIcon_txtKey_K2Node_ComponentBoundEvent_0_OnUpdateOperationMode__DelegateSignature();
		void BndEvt__MountShortcutIcon_txtKey_K2Node_ComponentBoundEvent_1_OnChangePadSkinType__DelegateSignature();
		void BndEvt__MountShortcutIcon_txtKey_K2Node_ComponentBoundEvent_2_OnUpdateKeyConfig__DelegateSignature();
		void Construct();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void Destruct();
		void ExecuteUbergraph_MountShortcutIcon(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
