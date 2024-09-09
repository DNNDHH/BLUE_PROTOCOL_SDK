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
	 * WidgetBlueprintGeneratedClass ShortcutRing_Ring.ShortcutRing_Ring_C
	 * Size -> 0x0080 (FullSize[0x0378] - InheritedSize[0x02F8])
	 */
	class UShortcutRing_Ring_C : public USBShortcutRingRing
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02F8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    InOut;                                                   // 0x0300(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UShortcutringIcon_C*                                 ShortcutringIcon_1;                                      // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UShortcutringIcon_C*                                 ShortcutringIcon_2;                                      // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UShortcutringIcon_C*                                 ShortcutringIcon_3;                                      // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UShortcutringIcon_C*                                 ShortcutringIcon_4;                                      // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UShortcutringIcon_C*                                 ShortcutringIcon_5;                                      // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UShortcutringIcon_C*                                 ShortcutringIcon_6;                                      // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UShortcutringIcon_C*                                 ShortcutringIcon_7;                                      // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UShortcutringIcon_C*                                 ShortcutringIcon_8;                                      // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnInOutFinished;                                         // 0x0348(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnClick;                                                 // 0x0358(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnClickRight;                                            // 0x0368(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void PlayAnimOut();
		void PlayAnimIn();
		void BndEvt__ShortcutringIcon_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature(class UShortcutringIcon_C* Icon);
		void BndEvt__ShortcutringIcon_1_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature(class UShortcutringIcon_C* Icon);
		void BndEvt__ShortcutringIcon_2_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature(class UShortcutringIcon_C* Icon);
		void BndEvt__ShortcutringIcon_3_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature(class UShortcutringIcon_C* Icon);
		void BndEvt__ShortcutringIcon_4_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature(class UShortcutringIcon_C* Icon);
		void BndEvt__ShortcutringIcon_5_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature(class UShortcutringIcon_C* Icon);
		void BndEvt__ShortcutringIcon_6_K2Node_ComponentBoundEvent_6_OnClick__DelegateSignature(class UShortcutringIcon_C* Icon);
		void BndEvt__ShortcutringIcon_7_K2Node_ComponentBoundEvent_7_OnClick__DelegateSignature(class UShortcutringIcon_C* Icon);
		void BndEvt__ShortcutringIcon_K2Node_ComponentBoundEvent_8_OnClickRight__DelegateSignature(class UShortcutringIcon_C* Icon);
		void BndEvt__ShortcutringIcon_1_K2Node_ComponentBoundEvent_9_OnClickRight__DelegateSignature(class UShortcutringIcon_C* Icon);
		void BndEvt__ShortcutringIcon_2_K2Node_ComponentBoundEvent_10_OnClickRight__DelegateSignature(class UShortcutringIcon_C* Icon);
		void BndEvt__ShortcutringIcon_3_K2Node_ComponentBoundEvent_11_OnClickRight__DelegateSignature(class UShortcutringIcon_C* Icon);
		void BndEvt__ShortcutringIcon_4_K2Node_ComponentBoundEvent_12_OnClickRight__DelegateSignature(class UShortcutringIcon_C* Icon);
		void BndEvt__ShortcutringIcon_5_K2Node_ComponentBoundEvent_13_OnClickRight__DelegateSignature(class UShortcutringIcon_C* Icon);
		void BndEvt__ShortcutringIcon_6_K2Node_ComponentBoundEvent_14_OnClickRight__DelegateSignature(class UShortcutringIcon_C* Icon);
		void BndEvt__ShortcutringIcon_7_K2Node_ComponentBoundEvent_15_OnClickRight__DelegateSignature(class UShortcutringIcon_C* Icon);
		void WidgetAnimationEvt_InOut_K2Node_WidgetAnimationEvent_1();
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_ShortcutRing_Ring(int32_t EntryPoint);
		void OnClickRight__DelegateSignature(int32_t Index);
		void OnClick__DelegateSignature(int32_t Index);
		void OnInOutFinished__DelegateSignature(float AnimationCurrentTime);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
