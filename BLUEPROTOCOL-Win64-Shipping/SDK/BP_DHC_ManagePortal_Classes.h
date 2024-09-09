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
	 * BlueprintGeneratedClass BP_DHC_ManagePortal.BP_DHC_ManagePortal_C
	 * Size -> 0x0030 (FullSize[0x02E8] - InheritedSize[0x02B8])
	 */
	class ABP_DHC_ManagePortal_C : public ABP_PartyPortal_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		TArray<class ABP_DHCMeasurer_C*>                           DBSTarget;                                               // 0x02C0(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate
		int32_t                                                    LoopIdx;                                                 // 0x02D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_WXKB[0x4];                                   // 0x02D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             DHC_Interacted;                                          // 0x02D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void CheckPartyMemberMenu(class ASBPlayerCharacter* PlayerCharacter, bool* CanStart);
		void CheckPartyId(class ASBPlayerCharacter* PlayerCharacter, bool* IsValid);
		void GetPlayerNowDHC(class APlayerController* Controller, class ABP_DHCMeasurer_C** NowDHC);
		void GetFreeDHCMesasurer(class ABP_DHCMeasurer_C** VacantArea);
		void ReceiveBeginPlay();
		void Interacted(class AActor* OtherActor, const struct FRotator& ViewRotation);
		void DHCInteractionResult(class ASBPlayerCharacter* InteractedPlayer, EN_DHC_InteractResult Result);
		void ExecuteUbergraph_BP_DHC_ManagePortal(int32_t EntryPoint);
		void DHC_Interacted__DelegateSignature(class ASBPlayerCharacter* InteractedPlayer, EN_DHC_InteractResult Result);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
