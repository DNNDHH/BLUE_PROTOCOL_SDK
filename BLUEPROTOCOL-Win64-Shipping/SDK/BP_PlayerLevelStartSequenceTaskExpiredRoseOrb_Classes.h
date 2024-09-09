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
	 * BlueprintGeneratedClass BP_PlayerLevelStartSequenceTaskExpiredRoseOrb.BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C
	 * Size -> 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
	 */
	class UBP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C : public USBPlayerLevelStartSequenceTaskBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0030(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USBLoginBonusWindow*                                 LoginBonusWidget;                                        // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USBPlayerLoginBonusComponent*                        LoginBonusComponent;                                     // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class FString>                                      ActiveIdList;                                            // 0x0048(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       IsActiveCheckTask;                                       // 0x0058(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GMQV[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USBRmShopComponent*                                  RmShopComponent;                                         // 0x0060(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ActiveCompletefunc(bool bWasSuccessful, int32_t ErrorCode);
		void GetDetailWork(bool bWasSuccessful, int32_t ErrorCode);
		void ActiveCheckRequest(bool IsFinish);
		void Start(class USBPlayerLevelStartSequenceComponent* Owner);
		void _1(bool Result, int32_t RetCode, const struct FSBCryptoCurrency& Cryptocurrency);
		void ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
