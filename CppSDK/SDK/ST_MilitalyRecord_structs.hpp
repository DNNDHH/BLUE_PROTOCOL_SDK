#pragma once

 

// Package: ST_MilitalyRecord

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct ST_MilitalyRecord.ST_MilitalyRecord
// 0x0058 (0x0058 - 0x0000)
struct FST_MilitalyRecord final
{
public:
	class FName                                   TextNo_2_5AE7D77444D972852B7A12908CF51BC5;         // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Division_5_0E8B16584962582C7E8DB58528CDF3A5;       // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_53AB[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBTextTableAsset*                      TextTable_19_5B81FEBA4C0F2E9EBB2FF28E7A228A97;     // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Unit_9_CC9AD74B460A36CE0F45BA88EB1C407F;           // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   DirectUnitText_18_2CC4724C4D2EEA021BF842A41D237708; // 0x0020(0x0018)(Edit, BlueprintVisible)
	int32                                         FractionalDigits_24_D74DCF3D470728DD753011812251BC37; // 0x0038(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_53AC[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Description_12_27B8E0484D5A7B6314754BBA4E1798E6;   // 0x0040(0x0018)(Edit, BlueprintVisible)
};
static_assert(alignof(FST_MilitalyRecord) == 0x000008, "Wrong alignment on FST_MilitalyRecord");
static_assert(sizeof(FST_MilitalyRecord) == 0x000058, "Wrong size on FST_MilitalyRecord");
static_assert(offsetof(FST_MilitalyRecord, TextNo_2_5AE7D77444D972852B7A12908CF51BC5) == 0x000000, "Member 'FST_MilitalyRecord::TextNo_2_5AE7D77444D972852B7A12908CF51BC5' has a wrong offset!");
static_assert(offsetof(FST_MilitalyRecord, Division_5_0E8B16584962582C7E8DB58528CDF3A5) == 0x000008, "Member 'FST_MilitalyRecord::Division_5_0E8B16584962582C7E8DB58528CDF3A5' has a wrong offset!");
static_assert(offsetof(FST_MilitalyRecord, TextTable_19_5B81FEBA4C0F2E9EBB2FF28E7A228A97) == 0x000010, "Member 'FST_MilitalyRecord::TextTable_19_5B81FEBA4C0F2E9EBB2FF28E7A228A97' has a wrong offset!");
static_assert(offsetof(FST_MilitalyRecord, Unit_9_CC9AD74B460A36CE0F45BA88EB1C407F) == 0x000018, "Member 'FST_MilitalyRecord::Unit_9_CC9AD74B460A36CE0F45BA88EB1C407F' has a wrong offset!");
static_assert(offsetof(FST_MilitalyRecord, DirectUnitText_18_2CC4724C4D2EEA021BF842A41D237708) == 0x000020, "Member 'FST_MilitalyRecord::DirectUnitText_18_2CC4724C4D2EEA021BF842A41D237708' has a wrong offset!");
static_assert(offsetof(FST_MilitalyRecord, FractionalDigits_24_D74DCF3D470728DD753011812251BC37) == 0x000038, "Member 'FST_MilitalyRecord::FractionalDigits_24_D74DCF3D470728DD753011812251BC37' has a wrong offset!");
static_assert(offsetof(FST_MilitalyRecord, Description_12_27B8E0484D5A7B6314754BBA4E1798E6) == 0x000040, "Member 'FST_MilitalyRecord::Description_12_27B8E0484D5A7B6314754BBA4E1798E6' has a wrong offset!");

}

