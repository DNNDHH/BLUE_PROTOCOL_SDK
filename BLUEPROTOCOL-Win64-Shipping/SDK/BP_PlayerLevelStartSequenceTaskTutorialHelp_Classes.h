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
	 * BlueprintGeneratedClass BP_PlayerLevelStartSequenceTaskTutorialHelp.BP_PlayerLevelStartSequenceTaskTutorialHelp_C
	 * Size -> 0x0088 (FullSize[0x00B8] - InheritedSize[0x0030])
	 */
	class UBP_PlayerLevelStartSequenceTaskTutorialHelp_C : public USBPlayerLevelStartSequenceTaskBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0030(0x0008) ZeroConstructor, Transient, DuplicateTransient
		int32_t                                                    Index;                                                   // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_F9CE[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSBTutorialHelpData>                         TutorialHelpDataList;                                    // 0x0040(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TMap<class FName, class FName>                             RowNameMap;                                              // 0x0050(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		class UTutorialHelpDialogBox_C*                            HelpWidget;                                              // 0x00A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class FName>                                        ConditionClearRowName;                                   // 0x00A8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void Start(class USBPlayerLevelStartSequenceComponent* Owner);
		void CreateTutorialHelpDialog();
		void OnClose_Event();
		void ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskTutorialHelp(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
