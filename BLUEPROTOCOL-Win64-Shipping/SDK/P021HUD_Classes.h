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
	 * WidgetBlueprintGeneratedClass P021HUD.P021HUD_C
	 * Size -> 0x0068 (FullSize[0x0328] - InheritedSize[0x02C0])
	 */
	class UP021HUD_C : public USBClassHUDP021
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    AnimGainLineEffect;                                      // 0x02C8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    AnimGainMax;                                             // 0x02D0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    AnimEffectFever1;                                        // 0x02D8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    AnimEffectFever2;                                        // 0x02E0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    AnimBGColor2;                                            // 0x02E8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    AnimBGColor1;                                            // 0x02F0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    AnimBGColor0;                                            // 0x02F8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    AnimEffectMax;                                           // 0x0300(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    AnimInOut;                                               // 0x0308(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UCanvasPanel*                                        CPRoot;                                                  // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        CPVisibleSetting;                                        // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UP021Counter_C*                                      P021Counter;                                             // 0x0320(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetP021Counter(class UP021Counter_C* SetP021Counter);
		void PlayAnimReverseNoise();
		void PlayAnimForwardNoise();
		void StopAnimGainLineEffect();
		void PlayAnimGainLineEffect();
		void StopAnimGainMax();
		void PlayAnimGainMax();
		void StopAnimEffectFever2();
		void PlayAnimEffectFever2();
		void StopAnimEffectFever1();
		void PlayAnimEffectFever1();
		void PlayAnimBG(int32_t InBGIndex);
		void StopAnimEffectMax();
		void PlayAnimEffectMax();
		void OnTerminate();
		void OnInitialize();
		void OnUnbind();
		void OnBind();
		void PlayAnimReverseInOut();
		void PlayAnimForwardInOut();
		void StopAnim(class UWidgetAnimation* InAnimation);
		void PlayAnim(class UWidgetAnimation* InAnimation, int32_t NumLoopsToPlay, EUMGSequencePlayMode PlayMode);
		void BindChangeVoltageRate();
		void UnbindChangeVoltageRate();
		void CustomEvent_1(class UObject* Sender, class UObject* Param);
		void BindFeverEnd();
		void UnbindFeverEnd();
		void BindFeverStart();
		void UnbindFeverStart();
		void CustomEvent(class UObject* Sender, class UObject* Param);
		void CustomEvent_2(class UObject* Sender, class UObject* Param);
		void OnChangeUIVisibleSetting(ESBUIType InUIType, bool bInVisibility, bool bInInstantly);
		void BindVisibleSetting();
		void UnbindVisibleSetting();
		void WidgetAnimationEvt_AnimEffectFever1_K2Node_WidgetAnimationEvent_2();
		void WidgetAnimationEvt_AnimGainLineEffect_K2Node_WidgetAnimationEvent_1();
		void ExecuteUbergraph_P021HUD(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
