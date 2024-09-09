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
	 * WidgetBlueprintGeneratedClass NpcGuildDetail.NpcGuildDetail_C
	 * Size -> 0x00F0 (FullSize[0x0368] - InheritedSize[0x0278])
	 */
	class UNpcGuildDetail_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCmnBtn16_C*                                         Btn_TeamDissolution;                                     // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnBtn16_C*                                         Btn_TeamRename;                                          // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGuildDetails_C*                                     GuildDetails;                                            // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 Txt_RenameTicket;                                        // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FGuildData                                          GuildData;                                               // 0x02A0(0x00B8) Edit, BlueprintVisible, DisableEditOnInstance
		class UGuildRenameDialog_C*                                ChangeDialog;                                            // 0x0358(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UGuildDissolutionCheckDialog_C*                      DissolutionDialog;                                       // 0x0360(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		class USBPlayerGuildComponent* GetGiuldComp();
		void SetGuildData(const struct FGuildData& GuildData);
		void Construct();
		void OnChanged();
		void OnRequestDissolution();
		void Destruct();
		void OnChangeName(int32_t RetCode);
		void BndEvt__Btn_TeamRename_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature();
		void BndEvt__CmnBtn16_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature();
		void ExecuteUbergraph_NpcGuildDetail(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
