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
	 * WidgetBlueprintGeneratedClass SecondPasswordSender.SecondPasswordSender_C
	 * Size -> 0x0041 (FullSize[0x02B9] - InheritedSize[0x0278])
	 */
	class USecondPasswordSender_C : public USBSecondPasswordSender
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USBRuntimeTextBlock*                                 CaptionMain;                                             // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 CaptionSub;                                              // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnClose01_C*                                       CmnClose01;                                              // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USoftwareNumericKeypad_C*                            SoftwareNumericKeypad;                                   // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUIBlocker_C*                                        UIBlocker;                                               // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnEnd;                                                   // 0x02A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		ESecondPasswordSenderStartType                             Role;                                                    // 0x02B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		void SetCaptionFailure(int32_t ExpireCount);
		void SetCaption();
		void ClearPassword();
		void SendPassword(ESendSecondPasswordRole Role);
		void OnAuthorizeSecondPassword(bool bWasSuccessful, int32_t ExpireCount, ESendSecondPasswordRole Role, bool bWasAuthorized);
		void BndEvt__SoftwareNumericKeypad_K2Node_ComponentBoundEvent_2_OnClickedEnter__DelegateSignature();
		void Construct();
		void BndEvt__SecondPasswordSender_CmnClose01_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature();
		void Cancel();
		void ExecuteUbergraph_SecondPasswordSender(int32_t EntryPoint);
		void OnEnd__DelegateSignature(ESendSecondPasswordRole Role, ESecondPasswordSenderEndReason Reason, ESecondPasswordSenderStartType StartType);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
