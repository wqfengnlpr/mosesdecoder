/*
 * Word.h
 *
 *  Created on: 23 Oct 2015
 *      Author: hieu
 */

#pragma once

#include "../Word.h"

namespace Moses2
{
namespace SCFG
{

class Word: public Moses2::Word
{
public:
  bool isNonTerminal;

  explicit Word() {}
  explicit Word(const SCFG::Word &copy);

  void CreateFromString(FactorCollection &vocab,
      const System &system,
      const std::string &str);

  bool operator==(const SCFG::Word &compare) const
  {
    int cmp = Moses2::Word::Compare(compare);
    if (cmp == 0 && isNonTerminal == compare.isNonTerminal) {
      return true;
    }
    else {
      return false;
    }
  }

  size_t hash() const;

  virtual void OutputToStream(std::ostream &out) const;
  virtual std::string Debug(const System &system) const;

protected:
};

inline size_t hash_value(const SCFG::Word &word)
{ return word.hash(); }

}
}
