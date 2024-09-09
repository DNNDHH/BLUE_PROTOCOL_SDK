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
	 * WidgetBlueprintGeneratedClass PlayerEGauge.PlayerEGauge_C
	 * Size -> 0x0011 (FullSize[0x02A1] - InheritedSize[0x0290])
	 */
	class UPlayerEGauge_C : public USBPlayerEGaugeWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0290(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    AnimInOut;                                               // 0x0298(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		bool                                                       Forward;                                                 // 0x02A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void PlayAnim(EUMGSequencePlayMode PlayMode, float PlaybackSpeed);
		void OnInAnimation(bool bForward);
		void SetEditMode(bool bIsEdit);
		void Construct();
		void WidgetAnimationEvt_AnimInOut_K2Node_WidgetAnimationEvent_1();
		void ExecuteUbergraph_PlayerEGauge(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
