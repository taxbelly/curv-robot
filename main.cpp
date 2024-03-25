  void SetHayStack(std::ifstream& stream)
  {
    ClearHaystack();
    stream.seekg(0, ios::end);
    haystack_len = static_cast<size_t>(stream.tellg());
    stream.seekg(0, ios::beg);
    haystack_ = new char[haystack_len];
    stream.read(haystack_, haystack_len);
    current = haystack_;
    end = current + haystack_len;
  }

  void SetHayStack(const char* buffer, size_t buff_len)
  {
    ClearHaystack();
    this->haystack_len = buff_len;
    haystack_ = new char[buff_len];
    memcpy(haystack_, buffer, buff_len);
    current = haystack_;
    end = current + buff_len;
  }
