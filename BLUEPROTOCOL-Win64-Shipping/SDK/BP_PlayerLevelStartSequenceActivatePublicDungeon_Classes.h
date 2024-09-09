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
	 * BlueprintGeneratedClass BP_PlayerLevelStartSequenceActivatePublicDungeon.BP_PlayerLevelStartSequenceActivatePublicDungeon_C
	 * Size -> 0x0059 (FullSize[0x0089] - InheritedSize[0x0030])
	 */
	class UBP_PlayerLevelStartSequenceActivatePublicDungeon_C : public USBPlayerLevelStartSequenceTaskBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0030(0x0008) ZeroConstructor, Transient, DuplicateTransient
		TArray<class FName>                                        DungeonIds;                                              // 0x0038(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class USBPlayerDungeonComponent*                           DungeonComponent;                                        // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBP_Dialog_C*                                        Dialog;                                                  // 0x0050(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class FName>                                        ActivatedPubDng;                                         // 0x0058(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FName>                                        OutArrayBuff;                                            // 0x0068(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                      DiffList;                                                // 0x0078(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       EndFlag;                                                 // 0x0088(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void NewDngID(TArray<class FName>* ClientCheckList, TArray<class FString>* ServerList, TArray<class FString>* Return);
		void CheckActivatedPubDng(TArray<class FName>* ActivatedPubDng);
		void DialogClose(EDialogResult Result);
		void GetActivatedPublicDungeons(int32_t RetCode, TArray<class FString> OutArray);
		void ShowRecursive();
		void Start(class USBPlayerLevelStartSequenceComponent* Owner);
		void AddActivatedPublicDungeons(int32_t RetCode, bool Result);
		void ExecuteUbergraph_BP_PlayerLevelStartSequenceActivatePublicDungeon(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
