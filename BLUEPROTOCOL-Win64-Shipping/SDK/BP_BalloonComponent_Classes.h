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
	 * BlueprintGeneratedClass BP_BalloonComponent.BP_BalloonComponent_C
	 * Size -> 0x0020 (FullSize[0x00D8] - InheritedSize[0x00B8])
	 */
	class UBP_BalloonComponent_C : public UActorComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UNpcBalloonWindow_C*                                 BalloonWidget;                                           // 0x00C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             ChangeBalloonVisible;                                    // 0x00C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void Show_Extend(const class FString& InText, class ACharacter* InAttachCharacter, const class FName& InAttachTransformName, float InAutoCloseTime);
		void OnRemove_Event_1();
		void Show(const class FString& InText, class ACharacter* InAttachCharacter);
		void Hide();
		void ExecuteUbergraph_BP_BalloonComponent(int32_t EntryPoint);
		void ChangeBalloonVisible__DelegateSignature(bool bVsiible);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
