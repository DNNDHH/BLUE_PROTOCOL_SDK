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
	 * BlueprintGeneratedClass BP_PlayerLevelStartSequenceActivateDungeon.BP_PlayerLevelStartSequenceActivateDungeon_C
	 * Size -> 0x007A (FullSize[0x00AA] - InheritedSize[0x0030])
	 */
	class UBP_PlayerLevelStartSequenceActivateDungeon_C : public USBPlayerLevelStartSequenceTaskBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0030(0x0008) ZeroConstructor, Transient, DuplicateTransient
		TArray<class FName>                                        DungeonIds;                                              // 0x0038(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class USBPlayerDungeonComponent*                           DungeonComponent;                                        // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBP_Dialog_C*                                        Dialog;                                                  // 0x0050(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<class FName, struct FSBMapInfo>                       MapMaster;                                               // 0x0058(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       TrueIsPublicDungeon;                                     // 0x00A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       TrueIsOutOfTerm;                                         // 0x00A9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void Start(class USBPlayerLevelStartSequenceComponent* Owner);
		void GetActiveDungeons(TArray<class FName> OutArray);
		void DialogEnd(EDialogResult Result);
		void ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
